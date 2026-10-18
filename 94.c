#include<stdio.h>
#include<string.h>

void main()
{
    char book[20];
    int i;

    clrscr();

    for(i=1; i<=5; i++)
    {
        printf("\nEnter book (C/JAVA/PYTHON): ");
        scanf("%s", book);

        if(strcmp(book, "C")==0)
        {
            printf("C Programming book is available.");
        }
        else if(strcmp(book, "JAVA")==0)
        {
            printf("Java Programming book is available.");
        }
        else if(strcmp(book, "PYTHON")==0)
        {
            printf("Python Programming book is available.");
        }
        else
        {
            printf("Book not found in the system.");
        }
    }

    getch();
}
