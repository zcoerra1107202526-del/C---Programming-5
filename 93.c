#include<stdio.h>
#include<string.h>

void main()
{
    char move[20];
    int i;

    clrscr();

    for(i=1; i<=5; i++)
    {
        printf("\nEnter movement (LEFT/RIGHT/CENTER): ");
        scanf("%s", move);

        if(strcmp(move, "LEFT")==0)
        {
            printf("Arm moving left.");
        }
        else if(strcmp(move, "RIGHT")==0)
        {
            printf("Arm moving right.");
        }
        else if(strcmp(move, "CENTER")==0)
        {
            printf("Arm returning to center.");
        }
        else
        {
            printf("Invalid movement command.");
        }
    }

    getch();
}
