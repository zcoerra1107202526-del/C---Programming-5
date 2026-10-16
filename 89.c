#include<stdio.h>
void main()
{
    float length;
    clrscr();

    printf("Enter component length in mm: ");
    scanf("%f", &length);

    if(length == 10.0)
    {
        printf("Component PASSED inspection.");
    }
    else
    {
        printf("Component REJECTED.");
    }

    getch();
}
