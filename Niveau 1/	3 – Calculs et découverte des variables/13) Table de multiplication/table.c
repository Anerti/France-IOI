#include <stdio.h>

int main()
{
   for (int incrementation = 1; incrementation <= 20; incrementation++)
   {
      for (int affichage = incrementation; affichage <= (20 * incrementation); affichage += incrementation)
      {
         printf("%d ", affichage);
      }
      printf("\n");
   }
   return 0;
}
