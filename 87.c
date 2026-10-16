#include<stdio.h>
void main()
{
    int battery;
    clrscr();

    printf("Enter robot battery percentage: ");
    scanf("%d", &battery);

    if(battery >= 20)
    {
        printf("Robot is ready to work!");
    }
    else
    {
        printf("Low battery! Charge the robot.");
    }

    getch();
}
