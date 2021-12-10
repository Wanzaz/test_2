#include <stdio.h>
#include <stdlib.h>

/*13. Máme celé číslo n. Napište rekurzivní funkci, která vypíše čísla od 1 do n .*/

void vypis(int n)
{
    if(n==0)
        return;
    vypis(n - 1);
    printf("%d ", n);
} 

int main( )
{
    int n;
    printf("Zadej cislo: ");
    scanf("%d", &n);
    vypis(n);
    return 0;
}
