#include<stdio.h>
#include<string.h>
void main()
{
    char password[20];
    int i;
clrscr();
        for(i=1; i<=3; i++)
    {
        printf("\nEnter password: ");
        scanf("%s", password);

        if(strcmp(password, "ROBOT123") == 0)
        {
            printf("Access Granted!");
            break;
        }
        else
        {
            printf("Wrong Password!");
        }
      getch();
    }

    
}
