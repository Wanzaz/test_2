#include <stdio.h>
#include <stdlib.h>

/*4. V hlavní funkci si načtěte dvě celá čísla x a y. Napište funkci, která vrátí menší číslo z těchto dvou čísel.*/

int mensi(int x, int y)
{
    int pro;
    pro = x < y ? x : y;
    return pro;
}


int main()
{
    int x, y;

    printf("Zadej cislo x: ");
    scanf("%d", &x);
    printf("Zadej cislo y: ");
    scanf("%d", &y);

    printf("Mensi cislo z cisel x a y je: %d", mensi(x,y));
    return 0;
}

