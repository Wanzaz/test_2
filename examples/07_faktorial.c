#include <stdio.h>
#include <stdlib.h>

/*7. Je dáno celé nezáporné číslo n. Napište funkci, která vrátí jeho faktoriál.*/

int faktorial(int n)
{
    int i, f=1;

    for(i=1;i<=n;i++)
    {
        f=f*i;
    }

    return f;
}



int main()
{
    int n;
    printf("Zadej cislo: ");
    scanf("%d",&n);

    printf("Faktorial cisla %d je %d \n",n,faktorial(n));

    return 0;
}
