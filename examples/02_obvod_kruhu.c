#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

/*2. V hlavní funkci si načtěte velikosti poloměru kružnice. Napište funkci, která vrátí obvod této kružnice.*/

float obvod_kruhu(float x)
{
    return 2*PI*x;
}

int main()
{
    float x;
    printf("Tento program urcuje obvod kruhu, zadavejte hodnoty v cm\n");
    printf("Zadej polomer kruhu: ");
    scanf("%f", &x);

    printf("%f cm je obvod obdelniku s polomerem %f cm", obvod_kruhu(x), x);
    return 0;
}

