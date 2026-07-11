#include <unistd.h>
#include <stdlib.h>

#define SIZE 4

void    print_grid(int grid[SIZE][SIZE]);
int     validate_views(int grid[SIZE][SIZE], int *views);
int     solve(int grid[SIZE][SIZE], int *views, int pos);
int     is_valid(int grid[SIZE][SIZE], int row, int col, int num);

void    print_error(void)
{
    write(1, "Error\n", 6);
}

void    print_grid(int grid[SIZE][SIZE])
{
    char c;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            c = grid[i][j] + '0';
            write(1, &c, 1);
            if (j != SIZE - 1)
                write(1, " ", 1);
        }
        write(1, "\n", 1);
    }
}

int     validate_views(int grid[SIZE][SIZE], int *views)
{
    // Implementation of view validation (left-right, right-left, up-down, down-up)
    // Check that each row and column matches the constraints defined by views array.
    return 1; // Return 1 if valid, 0 if not.
}

int     is_valid(int grid[SIZE][SIZE], int row, int col, int num)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (grid[row][i] == num || grid[i][col] == num)
            return 0;
    }
    return 1;
}

int     solve(int grid[SIZE][SIZE], int *views, int pos)
{
    if (pos == SIZE * SIZE)
        return validate_views(grid, views);
    
    int row = pos / SIZE;
    int col = pos % SIZE;
    
    for (int num = 1; num <= SIZE; num++)
    {
        if (is_valid(grid, row, col, num))
        {
            grid[row][col] = num;
            if (solve(grid, views, pos + 1))
                return 1;
            grid[row][col] = 0;
        }
    }
    return 0;
}

int     main(int argc, char **argv)
{
    if (argc != 2)
    {
        print_error();
        return 0;
    }
    
    int views[SIZE * 4];
    int grid[SIZE][SIZE] = {{0}};
    
    // Parse the input into the views array
    char *input = argv[1];
    int i = 0;
    while (*input && i < SIZE * 4)
    {
        if (*input >= '1' && *input <= '4')
            views[i++] = *input - '0';
        input++;
    }
    
    if (i != SIZE * 4)
    {
        print_error();
        return 0;
    }

    if (!solve(grid, views, 0))
        print_error();
    else
        print_grid(grid);
    
    return 0;
}