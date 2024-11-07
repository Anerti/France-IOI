#include <stdio.h>

int main()
{
   int hauteur, folioles;
   scanf("%d%d", &hauteur, &folioles);
   
   if (hauteur <= 5 && folioles >= 8)
   {
      printf("Tinuviel");
   }
   if (hauteur >= 10 && folioles >= 10)
   {
      printf("Calaelen");
   }
   if (hauteur <= 8 && folioles <= 5)
   {
      printf("Falarion");
   }
   if (hauteur >= 12 && folioles <= 7)
   {
      printf("Dorthonion");
   }
 
   return 0;
}
