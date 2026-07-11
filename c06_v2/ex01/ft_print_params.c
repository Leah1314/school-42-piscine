#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int j;

    // Start from argv[1], skipping argv[0] (the program name)
    i = 1;
    while (i < argc)
    {
        j = 0;
        // Print each argument character by character
        while (argv[i][j] != '\0')
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);  // Print a newline after each argument
        i++;
    }
    return 0;
}
