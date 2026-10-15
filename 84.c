
#include<stdio.h>
void main()
{
    int battery;
    clrscr();

    for(battery=0; battery<=100; battery=battery+20)
    {
        printf("Robot Battery: %d%%\n", battery);
    }

    getch();
}
