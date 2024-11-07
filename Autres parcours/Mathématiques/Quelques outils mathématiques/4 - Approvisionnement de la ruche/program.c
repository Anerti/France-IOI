#include <stdio.h>
#include <math.h>

int main()
{
   int x_ruche, y_ruche, nbFleurs;
   
   scanf("%d%d%d", &x_ruche, &y_ruche, &nbFleurs);
   int fleurs_accessible = 0;
   for (int i = 1; i <= nbFleurs; i++)
   {
      int x, y;
      float distance;
      
      scanf("%d%d", &x, &y);
      distance = sqrt(pow(x_ruche - x, 2) + pow(y_ruche - y, 2));
      
      if (distance < 1000.0)
      {
         fleurs_accessible++;
      }
   }
   printf("%d", fleurs_accessible);
   return 0;
}
