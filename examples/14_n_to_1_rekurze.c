#include <stdio.h>
#include <stdlib.h>

/*14. Máme celé číslo n. Napište rekurzivní funkci, která vypíše čísla od n do 1.*/

void vypis(int n)
{
    if(n==0)
        return;
    printf("%d ", n);
    vypis(n - 1);
} 

int main( )
{
    int n;
    printf("Zadej cislo: ");
    scanf("%d", &n);
    vypis(n);
    return 0;
} 
