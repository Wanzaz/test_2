#include <stdio.h>
#include <stdlib.h>

/*24. Máme celé číslo x. Napište funkci, která bude načítat ze vstupu čísla tak dlouho, dokud nenačte číslo x. Funkce vrátí počet těchto čísel (bez čísla x).*/

int pocet(int x)
{
    int pocet_cisel=0, cislo;

    printf("Enter a number: ");
    scanf("%d", &cislo);
    pocet_cisel++;

    while(cislo!=x)
    {
        printf("Enter a number: ");
        scanf("%d", &cislo);
        pocet_cisel++;
    }

    return pocet_cisel-1;
}

int main()
{
    int x;
    printf("Zadej cislo x: ");
    scanf("%d", &x);

    printf("Pocet cisel je %d", pocet(x));
    return 0;
}




