#include <stdio.h>

int main()
{
   int nbPaquets, poidsPaquets;
   scanf("%d %d", &nbPaquets, &poidsPaquets);
   
   if ((nbPaquets * poidsPaquets) > 105)
   {
      printf("Surcharge !");
   }

   return 0;
}
