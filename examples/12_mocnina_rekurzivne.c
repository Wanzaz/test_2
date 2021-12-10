#include <stdio.h>

/*12. Máme dané reálné číslo x a nezáporné celé číslo n. Napište funkci, která vrací mocninu x na n-tou. (rekurzivně i nerekurzivně)*/

long long int power(float x, int n)
{
  if(n==0)
      return 1;
  return x * power(x, n -1);
}


int main()
{
  float x;
  int n;
  printf("Enter the number x: ");
  scanf("%f", &x);
  printf("Enter the power of number x: ");
  scanf("%d", &n);
  
  printf("The result is %lld", power(x, n));
  return 0;
}
