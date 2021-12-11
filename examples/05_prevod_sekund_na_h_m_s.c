#include <stdio.h>
#include <stdlib.h>

/*5. Je dán časový údaj v sekundách. Napište funkci, která tyto sekundy převede na hodiny, minuty a sekundy. Výsledek hned vypište v té funkci.*/

void prevod(int sekundy)
{
    int h, m, s, zbytek, zbytek2;
    zbytek = sekundy % 3600;
    zbytek2 = zbytek % 60;
    h = sekundy/3600;
    m = zbyetk/60;
    s = zbytek2;
    printf("%d sekund je %d hodin %d minut %d sekund", sekundy, h, m, s);
}

int main()
{
    int sekundy;
    printf("Napis pocet sekund: ");
    scanf("%d", &sekundy);

    prevod(sekundy); 
    return 0;
}
