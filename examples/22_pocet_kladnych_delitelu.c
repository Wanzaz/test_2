#include <stdio.h>
#include <stdlib.h>

/*22. Máme celé kladné číslo n. Napiš funkci, která vrátí počet všech jeho kladných dělitelů.*/

int delitele(int n)
{
    int pocet=0;

    for(int i=1; i<=n;i++)
    {
        if(n%i == 0)
            pocet++;
    }
    
    return pocet;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Pocet delitelu cisla %d je %d", n, delitele(n));

    return 0;
} 
