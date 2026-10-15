
#include<stdio.h>
void main()
{
    int i;
    clrscr();

    printf("ROCKET LAUNCH SYSTEM\n\n");

    for(i=10; i>=1; i--)
    {
        printf("Countdown: %d\n", i);
    }

    printf("\n  /\\\n");
    printf("  ||\n");
    printf("  ||\n");
    printf(" /||\\\n");
    printf("/_||_\\\n");
    printf("ROCKET LAUNCHED!");

    getch();
}
