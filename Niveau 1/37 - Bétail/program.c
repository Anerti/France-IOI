#include <stdio.h>

int main()
{
   int total = 0, valeur;
   for (int i = 1; i <= 20; i++)
   {
      scanf("%d", &valeur);
      total += valeur;
   }
   printf("%d\n", total);
   return 0;
}
