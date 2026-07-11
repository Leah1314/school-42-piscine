#include <stdlib.h>

// Check if a character is in the charset
int is_charset(char c, char *charset)
{
    int i = 0;
    while (charset[i] != '\0')
    {
        if (c == charset[i])
            return 1;
        i++;
    }
    return 0;
}

// Count the number of words in the string
int count_words(char *str, char *charset)
{
    int i = 0;
    int words = 0;

    while (str[i] != '\0')
    {
        // Skip over delimiters
        while (str[i] != '\0' && is_charset(str[i], charset))
            i++;
        // If we have a valid word, count it
        if (str[i] != '\0')
        {
            words++;
            // Skip over the word
            while (str[i] != '\0' && !is_charset(str[i], charset))
                i++;
        }
    }
    return words;
}

// Copy a word from str into a new allocated string
char *copy_word(char *str, int start, int end)
{
    char *word = (char *)malloc((end - start + 1) * sizeof(char));
    int i = 0;

    if (!word)
        return NULL;
    
    while (start < end)
    {
        word[i] = str[start];
        i++;
        start++;
    }
    word[i] = '\0'; // Null-terminate the string

    return word;
}

// The main function to split the string
char **ft_split(char *str, char *charset)
{
    char **result;
    int i = 0, j = 0, start, word_count;

    // Count the number of words
    word_count = count_words(str, charset);
    
    // Allocate memory for the array of strings (+1 for the NULL pointer at the end)
    result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!result)
        return NULL;

    while (str[i] != '\0')
    {
        // Skip delimiters
        while (str[i] != '\0' && is_charset(str[i], charset))
            i++;
        
        // Mark the start of a word
        start = i;
        
        // Skip the word
        while (str[i] != '\0' && !is_charset(str[i], charset))
            i++;
        
        // If we found a word, copy it to the result array
        if (i > start)
        {
            result[j] = copy_word(str, start, i);
            if (!result[j])
            {
                // Handle malloc failure, free previously allocated memory
                while (j > 0)
                    free(result[--j]);
                free(result);
                return NULL;
            }
            j++;
        }
    }
    
    result[j] = NULL; // Null-terminate the array
    return result;
}
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str, char *charset);

int main(void)
{
    char **result;
    char str[] = "Hello,,,world! This,is,42!";
    char charset[] = ",!";
    int i;

    result = ft_split(str, charset);
    if (result != NULL)
    {
        for (i = 0; result[i] != NULL; i++)
        {
            printf("Word %d: %s\n", i + 1, result[i]);
            free(result[i]); // Free each string
        }
        free(result); // Free the array of strings
    }
    return 0;
}
