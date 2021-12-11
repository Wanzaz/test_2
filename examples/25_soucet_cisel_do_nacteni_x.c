#include <stdio.h>
#include <stdlib.h>

/*24. Máme celé číslo x. Napište funkci, která bude načítat ze vstupu čísla tak dlouho, dokud nenačte číslo x. Funkce vrátí počet těchto čísel (bez čísla x).*/

int soucet(int x)
{
    int soucet_cisel=0, cislo;

    printf("Enter a number: ");
    scanf("%d", &cislo);
    soucet_cisel++;

    while(cislo!=x)
    {
        printf("Enter a number: ");
        scanf("%d", &cislo);
        soucet_cisel += cislo;
    }

    return soucet_cisel-x;
}

int main()
{
    int x;
    printf("Zadej cislo x: ");
    scanf("%d", &x);

    printf("Soucet cisel je %d", soucet(x));
    return 0;
}
