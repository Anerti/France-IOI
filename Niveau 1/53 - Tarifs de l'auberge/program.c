#include <stdio.h>

int main()
{
   int age, poids_bagages;
   scanf("%d%d", &age, &poids_bagages);
   int prix;
   if (age == 60)
   {
      prix = 0;
   }
   else
   {
      if (age < 10)
      {
         prix = 5;
      }
      else
      {
         prix = 30;
         if (poids_bagages >= 20)
         {
            prix += 10;
         }
      }
   }
   printf("%d", prix);
 
   return 0;
}
