#include <stdio.h>
#include <stdlib.h>

/*11. Máme dané celé kladné číslo větší než 1. Napište funkci, která vrací číslo 1, pokud je to číslo prvočíslo, jinak vrací 0.*/

int prvocislo(int n)
{
    if(n == 2) return 0;
    if(n % 2 == 0) return 0;
    for(int i = 3; i <= n; i++)
    {
        if(n % i == 0) return 1;
    }
    return 0;
}

int main()
{

    int n;
    scanf("%d", &n);
    if(prvocislo(n) == 1) printf("je prvocislo");
    else printf("neni prvocislo");

    return 0;
}
