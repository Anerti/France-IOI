#include <stdio.h>

int main()
{
   int nbBonbons = 0;
   for (int nbTir = 1; nbTir <= 50; nbTir++)
   {
      nbBonbons += nbTir;
      printf("%d\n", nbBonbons);
   }
   return 0;
}
