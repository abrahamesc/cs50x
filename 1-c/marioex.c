#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt user for positive integer

    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // Print an n-by-n grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
