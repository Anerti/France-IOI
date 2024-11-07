#include <stdio.h>

int main()
{
   int nbKarvas;
   scanf("%d", &nbKarvas);
   for (int i = 1; i <= nbKarvas; i++)
   {
      int poids, age, longueurCornes, hauteurGarrot;
      scanf("%d %d %d %d", &poids, &age, &longueurCornes, &hauteurGarrot);
      
      printf("%d\n", ((longueurCornes * hauteurGarrot) + poids));
   }
   return 0;
}
