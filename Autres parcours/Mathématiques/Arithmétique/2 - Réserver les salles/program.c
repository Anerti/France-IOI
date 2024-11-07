#include <stdio.h>
#include <math.h>

int main()
{
   int contenance, nbEleve;
   
   scanf("%d%d", &contenance, &nbEleve);
   int nbSalle = ceil((double) nbEleve / contenance);
   printf("%d\n", nbSalle);
   return 0;
}
