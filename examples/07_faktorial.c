#include <stdio.h>
#include <stdlib.h>

/*23. Navrhněte algoritmus, který pro zadané celé číslo N vypočte jeho faktoriál.*/

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
