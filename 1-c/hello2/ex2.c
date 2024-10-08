#include <cs50.h> 
#include <cs50.c> 
#include <stdio.h>

int main(void)
{
    int x = get_int("what's x?  ");
    int y = get_int("what's y?  ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
}
