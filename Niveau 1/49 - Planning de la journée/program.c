#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nb_Village, position;
   int sortie = 0;
   
   scanf("%d%d", &position, &nb_Village);
   for (int i = 1; i <= nb_Village; i++)
   {
      int distance_Village;
      
      scanf("%d", &distance_Village);
      int resultat = abs(position - distance_Village);
      if (resultat <= 50)
      {
         sortie++;
      }
   }
   printf("%d", sortie);

   return 0;
}
