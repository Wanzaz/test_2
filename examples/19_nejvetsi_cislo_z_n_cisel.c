#include <stdio.h>
#include <stdlib.h>

/**19. Máme celé kladné číslo n. Napiš funkci, která načte n čísel a vrátí z nich nejmenší číslo.*/

int nejvetsi_cislo(int n)
{
    int max=0, x;
    for(int i=1;i<=n;i++)
    {
         printf("Zadej cislo x: ");
         scanf("%d", &x);
         
         if(max < x)
             max = x;
    }
    return max;
} 

int main ( )
{
    int n;
    printf("Zadej cislo n: ");
    scanf("%d", &n);
    printf("Nejvetsi cislo z n cisel je %d", nejvetsi_cislo(n));
    return 0;
}
