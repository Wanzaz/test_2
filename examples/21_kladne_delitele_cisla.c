#include <stdio.h>
#include <stdlib.h>

/*21. Máme celé kladné číslo n. Napiš funkci, která vypíše všechny jeho kladné dělitele.*/

void delitele(int n)
{
    for(int i=1; i<=n;i++)
    {
        if(n%i == 0)
            printf("%d ", i);
    }
       
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    delitele(n);

    return 0;
} 
