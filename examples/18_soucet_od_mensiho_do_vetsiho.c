#include <stdio.h>
#include <stdlib.h>

/*18. Máme celá čísla x a y. Nevíme, které je z nich je menší. Vaším úkolem je napsat funkci, vrátí součet čísel od od menšího čísla z x, y do většího z nich.*/

int soucet_od_mensiho(int x, int y)
{
    int mensi, vetsi, soucet;
    mensi = x < y ? x : y;
    vetsi = x > y ? x : y;

    for(int i=mensi; i<=vetsi;i++)
    {
        soucet += i;
    }
    return soucet;
} 

int main( )
{
    int x, y;
    printf("Zadej cislo x: ");
    scanf("%d", &x);
    printf("Zadej cislo y: ");
    scanf("%d", &y);
    
    printf("Soucet cisel mezi x a y je %d", soucet_od_mensiho(x, y));
    return 0;
} 
