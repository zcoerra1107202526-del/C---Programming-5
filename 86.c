
#include<stdio.h>
void main()
{
    int i, j;
    clrscr();

    printf("   DIWALI FIREWORKS\n\n");

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    printf("\n HAPPY DIWALI!");

    getch();
}
