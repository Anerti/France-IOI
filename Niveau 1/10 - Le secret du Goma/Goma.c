#include <stdio.h>
#include "robot.h"

int main()
{
   for (int i = 0; i < 15; i++)
   {
      droite();
      ramasser();
   }
   droite();
   deposer();
}
