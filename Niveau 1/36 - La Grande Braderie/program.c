#include <stdio.h>

int main()
{
   int positionDeDepart, largeurEmplacement, nbVendeurs;
   scanf("%d%d%d", &positionDeDepart, &largeurEmplacement, &nbVendeurs);
   for (int i = 1; i <= nbVendeurs + 1; i++)
   {
      printf("%d\n", positionDeDepart);
      positionDeDepart += largeurEmplacement;
   }
   return 0;
}
