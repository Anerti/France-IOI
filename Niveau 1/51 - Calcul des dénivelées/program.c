#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nb_Variations;
   scanf("%d", &nb_Variations);
   
   int alt_Descente = 0;
   int alt_Monte = 0;
   for (int i = 1; i <= nb_Variations; i++)
   {
      int Altitude;
      scanf("%d", &Altitude);
      
      if (Altitude > 0)
      {
         alt_Monte += Altitude;
      }
      else
      {
         alt_Descente += Altitude;
      }
   }
   alt_Descente = abs(alt_Descente);
   printf("%d\n%d", alt_Monte, alt_Descente);

   return 0;
}
