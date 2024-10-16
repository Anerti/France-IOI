#include <stdio.h>
#include "robot.h"

int main()
{
   int j = 1;
   while (j <= 10)
   {
      for (int i = 1; i <= j; i++)
      {
         droite();
      }
      ramasser();
      for (int i = j; i > 0; i--)
      {
         gauche();
      }
      deposer();
      j++;
   }
   return 0;
}
