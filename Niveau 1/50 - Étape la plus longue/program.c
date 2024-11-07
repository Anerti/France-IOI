#include <stdio.h>

int main()
{
   int nb_Jours_Marche;
   scanf("%d", &nb_Jours_Marche);
   
   int distance_Max = 0;
   for (int i = 1; i <= nb_Jours_Marche; i++)
   {
      int distance;
      scanf("%d", &distance);
      
      if (distance > distance_Max)
      {
         distance_Max = distance;
      }
   }
   printf("%d", distance_Max);

   return 0;
}
