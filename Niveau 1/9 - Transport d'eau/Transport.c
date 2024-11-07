#include <stdio.h>
#include "robot.h"

int main()
{
   for (int i = 0; i < 2; i++)
   {
      gauche();
   }
   printf("Bonjour, laissez-moi vous aider\n");
   ramasser();
   for (int i = 0; i < 32; i++)
   {
      droite();
   }
   deposer();
}
