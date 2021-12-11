#include <stdio.h>
#include <stdlib.h>

/*8. Ze vstupu načtěte počet dnů. Napište funkci, která vypíše ze dnů počet roků, měsíců a dnů.*/

void prevod(int dny)
{
    int r, m, d, zbytek, zbytek2;
    zbytek = dny % 365;
    zbytek2 = zbytek % 30;
    r = dny/365;
    m = zbytek/30;
    d = zbytek2;
    printf("%d dnu je %d roku %d mesicu %d dnu", dny, r, m, d);
}

int main()
{
    int dny;
    printf("Napis pocet dnu: ");
    scanf("%d", &dny);

    prevod(dny); 
    return 0;
}
