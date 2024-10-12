#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int h;
   do 
   {
      h = get_int("Height: ");
   }
   while (h < 1 || h > 8);

   for (int i = 1 ; i < h+1; i++)
   {
      for (int j = 0; j < i; j++)
      {   
        printf("#");
      }
      printf("\n");
   }
}

