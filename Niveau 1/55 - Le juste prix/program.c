#include <stdio.h>

int main()
{
   int nbMarchands;
   int positionMax = 0;
   scanf("%d", &nbMarchands);
   
   int position = 1;
   int prixMin = 1000 * 1000;
   for (int i = 1; i <= nbMarchands; i++)
   {
      int prix;
      scanf("%d", &prix);
      
      if (prix <= prixMin)
      {
         prixMin = prix;
         positionMax = position;
      }
      position++;
   }
   printf("%d", positionMax);
 
   return 0;
}
