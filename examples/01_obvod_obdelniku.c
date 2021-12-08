#include <stdio.h>
#include <stdlib.h>

/*1. V hlavní funkci si načtěte velikosti stran obdélníku. Napište funkci, která z těchto velikostí stran vrátí jeho obvod.*/

int obvod_obdelniku(int x, int y)
{
    return 2*(x+y);
}

int main()
{
    int x, y;
    printf("Tento program urcuje obvod obdelniku, zadavejte hodnoty v cm\n");
    printf("Enter the width: ");
    scanf("%d", &x);
    printf("Enter the lenght: ");
    scanf("%d", &y);

    printf("%d cm je obvod obdelniku se stranami %d cm a %d cm", obvod_obdelniku(x, y), x, y);
    return 0;
}
