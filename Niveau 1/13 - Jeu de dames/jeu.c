#include <stdio.h>

int main()
{
   for(int i = 0; i < 20; i++)
   {
      for(int i = 0; i < 20; i++)
      {
         printf("OX");
      }
      printf("\n");
      for(int i = 0; i < 20; i++)
      {
         printf("XO");
      }
      printf("\n");
   }
}
