#include <stdio.h>
#include <stdlib.h>

/*20. Máme celé kladné číslo n. Napiš funkci, která načte n čísel a vrátí z nich nejmenší číslo.*/

int nejvetsi_cislo(int n)
{
    int soucet, x;
    printf("Zadej cislo x: ");
    scanf("%d", &x);
    soucet = x;
    for(int i=2;i<=n;i++)
    {
         printf("Zadej cislo x: ");
         scanf("%d", &x);
         
         if(soucet > x)
             soucet = x;
    }
    return soucet;
} 

int main ( )
{
    int n;
    printf("Zadej cislo n: ");
    scanf("%d", &n);
    printf("Nejvetsi cislo z n cisel je %d", nejvetsi_cislo(n));
    return 0;
}
