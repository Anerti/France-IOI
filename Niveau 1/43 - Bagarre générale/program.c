#include <stdio.h>

int main()
{
   int arignon, evaran;
   scanf("%d %d", &arignon, &evaran);
   
   int resultat = arignon - evaran;
   if (resultat > 10)
   {
      printf("La famille Arignon a un champ trop grand");
   }
   if (resultat < -10)
   {
      printf("La famille Evaran a un champ trop grand");
   }

   return 0;
}
