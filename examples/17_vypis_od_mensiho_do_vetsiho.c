#include <stdio.h>
#include <stdlib.h>

/*17. Máme celá čísla x a y. Nevíme, které je z nich je menší. Vaším úkolem je napsat funkci, která vypíše číslo od menšího čísla z x, y do většího z nich*/

void vypis_od_mensiho(int x, int y)
{
    int mensi, vetsi;
    mensi = x < y ? x : y;
    vetsi = x > y ? x : y;

    for(int i=mensi; i<=vetsi;i++)
    {
        printf("%d ", i);
    }
} 

int main( )
{
    int x, y;
    printf("Zadej cislo x: ");
    scanf("%d", &x);
    printf("Zadej cislo y: ");
    scanf("%d", &y);
    
    vypis_od_mensiho(x, y);
    return 0;
} 

