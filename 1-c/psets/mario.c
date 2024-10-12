#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int height;
   do 
   {
      height = get_int("Height: ");
   }
   while (height < 1 || height > 8);

   for (int i = 1; i < height + 1 ; i++)
   {
      for (int h = height - i ; h > 0; h--)
      {
         printf(" ");
      }
      for (int hash = i; hash > 0; hash--)
      {
         printf("#");
      }     
      printf("  ");
      for (int hashl = i; hashl > 0; hashl--)
      {
         printf("#");
      }
      printf("\n");
   }
}

