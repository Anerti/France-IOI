#include <stdio.h>
#include <math.h>

int main()
{
   int hauteur, largeur;
   
   scanf("%d%d", &hauteur, &largeur);
   int temp_hauteur = ceil (hauteur / 2);
   int temp_largeur = floor(largeur / 2);
   for (int i = 0; i < temp_hauteur; i++)
   {
      for (int j = 0; j < temp_largeur; j++)
      {
         printf("OX");
      }
      if (largeur % 2 != 0)
      {
         printf("O");
      }
      printf("\n");
      for (int j = 0; j < temp_largeur; j++)
      {
         printf("XO");
      }
      if (largeur % 2 != 0)
      {
         printf("X");
      }
      printf("\n");
   }
   if (hauteur % 2 != 0)
   {
      for (int i = 0; i < temp_largeur; i++)
      {
         printf("OX");
      }
      if (largeur % 2 != 0)
      {
         printf("O");
      }
   }
   return 0;
}
