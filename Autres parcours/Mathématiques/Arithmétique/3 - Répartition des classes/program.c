#include <stdio.h>

int main()
{
   int nbEleve, nbClasse;
   
   scanf("%d%d", &nbEleve, &nbClasse);
   int repartition = nbEleve / nbClasse;
   int reste = nbEleve % nbClasse;
   int classe[nbClasse];
   for (int i = 0; i < nbClasse; i++)
   {
      classe[i] = repartition;
   }
   for (int i = 0; i < reste; i++)
   {
      classe[i]++;
   }
   for (int i = 0; i < nbClasse; i ++)
   {
      printf("%d\n", classe[i]);
   }
   return 0;
}
