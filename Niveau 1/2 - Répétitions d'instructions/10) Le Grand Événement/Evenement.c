#include <stdio.h>
#include "robot.h"

int main()
{
   for (int j = 0; j < 9; j++)
   {
      haut();
   }
   droite();
   for (int i = 0; i < 4; i++)
   {
      for (int j = 0; j < 8; j++)
      {
         bas();
      }
      droite();
      for (int j = 0; j < 8; j++)
      {
         haut();
      }
      droite();
   }
   for (int j = 0; j < 9; j++)
   {
      bas();
   }
   for (int j = 0; j < 9; j++)
   {
      gauche();
   }
}
