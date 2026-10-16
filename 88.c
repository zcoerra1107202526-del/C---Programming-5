#include<stdio.h>
void main()
{
    int spaces;
    clrscr();

    printf("Enter available parking spaces: ");
    scanf("%d", &spaces);

    if(spaces > 0)
    {
        printf("Parking available!");
        printf("\nGate is OPEN.");
    }
    else
    {
        printf("Parking is FULL!");
        printf("\nGate is CLOSED.");
    }

    getch();
}
