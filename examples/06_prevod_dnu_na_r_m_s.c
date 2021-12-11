#include <stdio.h>
#include <stdlib.h>

/*6. Je dán časový údaj ve dnech. Napište funkci, která tyto dny převede na roky, měsíce (30 dní) a sekundy. Výsledek hned vypište v té funkci.*/

void prevod(int dny)
{
    int r, m, s, zbytek, zbytek2;
    zbytek = dny % 365;
    zbytek2 = zbytek % 30;
    r = dny/365;
    m = zbytek/30;
    s = zbytek2 * 86400;
    printf("%d dnu je %d roku %d mesicu %d sekund", dny, r, m, s);
}

int main()
{
    int dny;
    printf("Napis pocet dnu: ");
    scanf("%d", &dny);

    prevod(dny); 
    return 0;
}
