#include <stdio.h>
#include <stdlib.h>

/*16. Napište funkci nsd, která pro dvě celá čísla vrátí jejich největší společný dělitel.*/

 int main ()
 {
   int a, b;
   printf ("Program určí největšího společného dělitele pro 2 zadaná čísla\n \n");
   
   printf ("\n Enter the first number:");
   scanf ("%d", & a);
   
   printf ("\n Enter second number:");
   scanf ("%d", & b);
   
   if ((a == 0) || (b == 0))
   {
      printf ("Nelze určit, zda je jedno z čísel nula \n");
      return 0;
   }
   if (a <0) a = -a;
   if (b <0) b = -b;
  
   while (a != b)
   {
      if (a> b) a = a-b;
           else b = b-a;
   }

   printf ("\n Největší společný dělitel je %d \n \n", a);

   return 0;
 }
