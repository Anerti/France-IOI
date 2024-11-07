#include <stdio.h>

int main()
{
   int nb;
   
   scanf("%d", &nb);
   int i = 2;
   while (i <= nb)
   {
      if ((nb % i == 0) && i != nb)
      {
         printf("Composé\n");
         break;
      }
      if (nb == i)
      {
         printf("Premier\n");
      }
      i++;
   }
   
return 0;
}
