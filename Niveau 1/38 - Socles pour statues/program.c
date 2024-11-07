#include <stdio.h>

int main()
{
   int largeurSol, largeurFace;
   scanf("%d%d", &largeurSol, &largeurFace);
   int resultat = 0;
   for (int i = largeurSol; i >= largeurFace; i--)
   {
      resultat += i * i;
   }
   printf("%d", resultat);
   return 0;
}
