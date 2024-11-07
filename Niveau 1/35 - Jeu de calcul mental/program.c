#include <stdio.h>

int main()
{
   int nbNombre;
   scanf("%d", &nbNombre);
   int valeur = 66;
   for (int i = 1; i <= nbNombre; i++)
   {
      valeur = valeur * i;
      printf("%d\n", valeur);
   }
   return 0;
}
