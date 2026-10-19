#include<stdio.h>
void main()
{
    int i, code;
    clrscr();

    printf("AUTOMATED SORTING SYSTEM\n\n");

    for(i=1; i<=5; i++)
    {
        printf("Enter object code (1=Metal, 2=Non-metal): ");
        scanf("%d",&code);

        if(code==1)
            printf("Object %d: Robotic arm sends to Metal Bin\n\n",i);
        else if(code==2)
            printf("Object %d: Robotic arm sends to Non-metal Bin\n\n",i);
        else
            printf("Invalid object code!\n\n");
    }

    printf("Sorting Process Completed!");
    getch();
}
