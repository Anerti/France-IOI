#include <stdio.h>

int main()
{
   int lance_1;
   int lance_2;
   
   scanf("%d%d", &lance_1, &lance_2);
   
   if ((lance_1 + lance_2) >= 10)
   {
      printf("Taxe spéciale !\n36");
   }
   else
   {
      printf("Taxe régulière\n%d", ((lance_1 + lance_2) * 2));
   }
   
   return 0;
}
