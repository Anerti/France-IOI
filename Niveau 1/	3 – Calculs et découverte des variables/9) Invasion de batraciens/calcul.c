#include <stdio.h>

int main()
{
   int resultat = 1337;
   
   for (int i = 1; i <= 12; i++)
   {
      resultat *= 2;
   }
   printf("%d\n", resultat);
return 0;
}
