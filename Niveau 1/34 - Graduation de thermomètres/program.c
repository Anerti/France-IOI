#include <stdio.h>

int main()
{
   int tempMin;
   int tempMax;
   scanf("%d", &tempMin);
   scanf("%d", &tempMax);
   for (int i = tempMin; i <= tempMax; i++)
   {
      printf("%d\n", i);
   }
   return 0;
}
