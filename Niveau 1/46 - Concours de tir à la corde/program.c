#include <stdio.h>

int main()
{
   int nbMembre, nb;
   int equipe_1 = 0;
   int equipe_2 = 0;
   
   scanf("%d", &nbMembre);
   for (int i = 0; i < nbMembre; i++)
   {
      int joueur_1 = 0;
      int joueur_2 = 0;
      
      scanf("%d%d", &joueur_1, &joueur_2);
      equipe_1 += joueur_1;
      equipe_2 += joueur_2;
   }
   if (equipe_1 > equipe_2)
   {
      nb = 1;
   }
   else
   {
      nb = 2;
   }
   printf("L'équipe %d a un avantage\n", nb);
   printf("Poids total pour l'équipe 1 : %d\n", equipe_1);
   printf("Poids total pour l'équipe 2 : %d\n", equipe_2);

   return 0;
}
