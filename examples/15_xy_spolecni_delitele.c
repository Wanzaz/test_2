#include <stdio.h>
#include <stdlib.h>

/*15. Napište funkci, která pro dvě celá čísla vypíše všechny jejich dělitele.*/

void spolecny_delitel(int x, int y)
{
    int i;
    for(i=1;i<=x; i++)
    {
        if(x%i == 0 && y%i == 0)
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);

    spolecny_delitel(x, y);
    return 0;
}
