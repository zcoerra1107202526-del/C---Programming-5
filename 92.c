#include<stdio.h>
#include<string.h>

void main()
{
    char command[20];
    int i;

    clrscr();

    for(i=1; i<=5; i++)
    {
        printf("\nEnter command (START/STOP/STATUS): ");
        scanf("%s", command);

        if(strcmp(command, "START") == 0)
        {
            printf("Machine Started");
        }
        else if(strcmp(command, "STOP") == 0)
        {
            printf("Machine Stopped");
        }
        else if(strcmp(command, "STATUS") == 0)
        {
            printf("Machine is Operational");
        }
        else
        {
            printf("Invalid Command");
        }
    }

    getch();
}
