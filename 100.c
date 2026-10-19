#include<stdio.h>
void main()
{
    int i, amount;
    clrscr();

    printf("AUTOMATED BOTTLE FILLING SYSTEM\n\n");

    for(i=1; i<=6; i++)
    {
        printf("Enter bottle %d fill amount in ml: ",i);
        scanf("%d",&amount);

        if(amount==500)
            printf("Bottle %d: FILLING OK\n\n",i);
        else if(amount<500 && amount>=0)
            printf("Bottle %d: UNDERFILLED\n\n",i);
        else if(amount>500)
            printf("Bottle %d: OVERFILLED\n\n",i);
        else
            printf("Invalid filling amount\n\n");
    }

    printf("QUALITY INSPECTION COMPLETED!");
    getch();
}
