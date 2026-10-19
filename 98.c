#include<stdio.h>
void main()
{
    int i, success=0;

    clrscr();

    printf("ROBOTIC ASSEMBLY LINE\n\n");

    for(i=1; i<=10; i++)
    {
        printf("Assembly Operation %d Completed\n",i);
        success++;
    }

    printf("\nTotal Operations: 10");
    printf("\nSuccessful Operations: %d",success);
    printf("\nProduction Cycle Completed!");

    getch();
}
