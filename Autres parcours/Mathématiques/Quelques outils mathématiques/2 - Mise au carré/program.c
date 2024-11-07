#include <stdio.h>
#include <math.h>

int main()
{
   int nbEleve;
   scanf("%d", &nbEleve);
   
   if (sqrt(nbEleve) == floor(nbEleve / sqrt(nbEleve)))
      printf("Oui");
   else
      printf("Non");
   return 0;
}
