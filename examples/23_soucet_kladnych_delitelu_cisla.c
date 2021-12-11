#include <stdio.h>
#include <stdlib.h>

/*23. Máme celé kladné číslo n. Napiš funkci, která vrátí součet všech jeho kladných dělitelů.*/

int delitele(int n)
{
    int soucet=0;

    for(int i=1; i<=n;i++)
    {
        if(n%i == 0)
	    soucet += i;
    }
    
    return soucet;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Soucet kladnych delitelu cisla %d je %d", n, delitele(n));

    return 0;
} 
