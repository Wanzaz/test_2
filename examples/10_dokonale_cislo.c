#include <stdio.h>
#include <stdlib.h>

/*10. Je celé číslo n dokonalé? U dokonalého čísla platí, že se rovná součtu svých dělitelů. Např. 6 = 1 + 2 + 3*/

int dokonale(int n)
{
    int i, s=0;
    for(i=1; i<= n/2; i++)
    {
        if(n%i==0)
            s = s + i;
    }

    if(s==n) //return (s==n);
        return 1;
    else
        return 0;
}


int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (dokonale(n)==1)
        printf("Cislo %d je dokonale", n);
    else
        printf("Cislo %d neni dokonale", n);

    return 0;
}
