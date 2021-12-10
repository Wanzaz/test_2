#include <stdio.h>
#include <stdlib.h>

/*12. Máme dané reálné číslo x a nezáporné celé číslo n. Napište funkci, která vrací mocninu x na n-tou. (rekurzivně i nerekurzivně)*/

int mocnina(float x, int n)
{
    int i, m=1;

    for(i=1;i<=n;i++)
    {
        m=m*x;
    }

    return m;
}



int main()
{
    int n;
    float x;
    printf("Zadej cislo: ");
    scanf("%f",&x);
    printf("Zadej mocninu cisla: ");
    scanf("%d",&n);

    printf("Mocnina %d na cislu %f je %d \n",n,x,mocnina(x,n));

    return 0;
}
