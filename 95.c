#include<stdio.h>
#include<string.h>

void main()
{
    char waste[20];
    int i, metal=0, plastic=0, paper=0;

    clrscr();

    printf("SMART WASTE SORTING SYSTEM\n");

    for(i=1; i<=5; i++)
    {
        printf("\nEnter waste type (METAL/PLASTIC/PAPER): ");
        scanf("%s", waste);

        if(strcmp(waste, "METAL")==0)
        {
            metal++;
            printf("Metal detected. Sending to metal bin.");
        }
        else if(strcmp(waste, "PLASTIC")==0)
        {
            plastic++;
            printf("Plastic detected. Sending to plastic bin.");
        }
        else if(strcmp(waste, "PAPER")==0)
        {
            paper++;
            printf("Paper detected. Sending to paper bin.");
        }
        else
        {
            printf("Unknown waste. Sorting rejected.");
        }
    }

    printf("\n\n--- SORTING REPORT ---");
    printf("\nMetal items: %d", metal);
    printf("\nPlastic items: %d", plastic);
    printf("\nPaper items: %d", paper);

    getch();
}
