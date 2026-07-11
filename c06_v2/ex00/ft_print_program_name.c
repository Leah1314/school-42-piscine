#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;

    // Access the program name from argv[0]
    i = 0;
    while (argv[0][i] != '\0')
    {
        write(1, &argv[0][i], 1);  // Write each character to stdout
        i++;
    }
    write(1, "\n", 1);  // Write a newline at the end

    return 0;
}
