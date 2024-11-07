#include <stdio.h>

int main()
{
   int age;
   scanf("%d", &age);
   
   if (age < 21)
   {
      printf("Tarif réduit\n");
   }
   else
   {
      printf("Tarif plein\n");
   }

   return 0;
}
