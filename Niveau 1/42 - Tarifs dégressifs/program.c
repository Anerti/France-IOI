#include <stdio.h>

int main()
{
   int heureArrive;
   scanf("%d", &heureArrive);
   
   int prix = (heureArrive * 5) + 10;
   if (prix > 53)
   {
      printf("53");
   }
   else
   {
      printf("%d", prix);
   }

   return 0;
}
