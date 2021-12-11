#include <stdio.h>

/*
3. V hlavní funkci si načtěte koeficienty kvadratické rovnice ax2 + bx + c = 0. (reálná čísla). Napište funkci, která bude vracet počet různých řešení této rovnice. V hlavní funkci pak vypište počet řešení slovy.

ax² + bx + c = 0
D = b² - 4ac
D = 0  1
D > 0  2
D < 0  0
*/


int pocet_reseni(float a, float b, float c)
{
   float d= b*b-4*a*c;
   if (d>0)
       return 2;
   else if(d==0)
       return 1;
   return 0;
}

int main() {

  float a=3.5, b=2, c=9;
  int pocet = pocet_reseni(a,b,c);
  if (pocet == 2)
      printf("Rovnice ma 2 ruzne koreny");
  if (pocet == 1)
      printf("Rovnice ma jeden dvojnasobny koreny");
  if(pocet == 0)
      printf("Rovnice nema reseni");
  return 0;
}
