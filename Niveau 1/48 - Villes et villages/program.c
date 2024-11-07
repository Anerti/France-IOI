#include <stdio.h>

int main()
{
   int nb_Lieux;
   int nb_Villes = 0;
   
   scanf("%d", &nb_Lieux);
   for (int i = 1; i <= nb_Lieux; i++)
   {
      int  nb_Habitant;
      
      scanf("%d", &nb_Habitant);
      if (nb_Habitant > 10000)
      {
         nb_Villes++;
      }
   }
   printf("%d", nb_Villes);

   return 0;
}
