#include<stdio.h>
void main()
{
    int i, battery;
    clrscr();

    printf("ROBOT BATTERY MONITORING SYSTEM\n\n");

    for(i=1; i<=5; i++)
    {
        printf("Enter battery level (0-100): ");
        scanf("%d",&battery);

        if(battery>60 && battery<=100)
            printf("Battery Status: GOOD\n\n");
        else if(battery>20 && battery<=60)
            printf("Battery Status: LOW\n\n");
        else if(battery>=0 && battery<=20)
            printf("Battery Status: CRITICAL\n\n");
        else
            printf("Invalid Battery Level\n\n");
    }

    printf("Battery Inspection Completed!");
    getch();
}
