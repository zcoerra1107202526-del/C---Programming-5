#include<stdio.h>
void main()
{
    int i, distance;
    clrscr();

    printf("AUTONOMOUS ROBOT NAVIGATION\n\n");

    for(i=1; i<=5; i++)
    {
        printf("Enter distance in cm: ");
        scanf("%d",&distance);

        if(distance<10)
            printf("Obstacle Detected! Robot Stops.\n\n");
        else
            printf("Path Clear! Robot Moves Forward.\n\n");
    }

    printf("Navigation Check Completed!");
    getch();
}
