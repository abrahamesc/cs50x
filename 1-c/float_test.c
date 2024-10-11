#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int x = get_int("What's the number: ");
   printf("%f\n", (float) x);
}
