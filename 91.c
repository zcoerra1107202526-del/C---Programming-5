#include<stdio.h>
#include<string.h>

void main()
{
    char name[20];
    int marks, i;

    clrscr();

    for(i=1; i<=3; i++)
    {
        printf("\nEnter student name: ");
        scanf("%s", name);

        printf("Enter marks: ");
        scanf("%d", &marks);

        if(strcmp(name, "Parth") == 0)
        {
            printf("Student: Parth\n");
        }

        if(marks >= 75)
        {
            printf("Grade A");
        }
        else if(marks >= 60)
        {
            printf("Grade B");
        }
        else if(marks >= 40)
        {
            printf("Grade C - Pass");
        }
        else
        {
            printf("Fail");
        }

        printf("\n");
    }

    getch();
}
