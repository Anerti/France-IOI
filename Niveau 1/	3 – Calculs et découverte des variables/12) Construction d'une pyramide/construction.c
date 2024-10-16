#include <stdio.h>

int main()
{
   int total = 0;
   for (int i = 17; i > 0; i -= 2)
   {
      total += i * i * i;
   }
   printf("%d", total);
   return 0;
}
