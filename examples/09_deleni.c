#include <stdio.h>
#include <stdlib.h>

/*9. Máme číslo a dělitele. (oba typu int). Napište funkci, která vrátí číslo 1, jestliže je číslo dělitelné dělitelem beze zbytku. V hlavní funkci vypište, zda je číslo dělitelné nebo ne.*/

int deleni(int x, int y)
{
    if(x%y == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int x, y;
    printf("Zadej cislo: ");
    scanf("%d", &x);
    printf("Zadej delitele cisla: ");
    scanf("%d", &y);
    
    if(deleni(x,y) == 1)
        printf("Cislo %d je delitelne %d", x, y);
    else
	printf("Cislo %d neni delitelne %d", x, y);
    
    return 0;
}

