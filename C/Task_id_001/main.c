#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char userChoice=0;
    char menuItems[4][17]={ {"a) Good morning."},
                            {"b) Good evening."},
                            {"c) Exit Program."}
                             };
    unsigned char loopIndex;
    do{
        /* Clear the screen every iteration*/
        system("cls");

        for(loopIndex=0;loopIndex<4;loopIndex++)
        {
            printf("%s\n",menuItems[loopIndex]);
        }
        /* Ask the user to his/her choice  */
        printf("Enter Your Choice: ");

        /* Get the user choice             */
        userChoice = getch();

        /* Clear the Input Buffer*/
        fflush(stdin);

        /* Clear the Screen and menu items*/
        system("cls");

        /* Check the user choice and do the suitable action*/
        switch(userChoice)
        {
           case'a':
                printf("Good morning.\n");
                break;
           case'b':
                printf("Good evening.\n");
                break;
           case'c':
                printf("Exit The Program.\n");
                break;
            default:
                printf("Wrong choice.\n");
        }

        printf("Please Enter any Key to return the menu again.");

        userChoice = getch();
        fflush(stdin);

    }while(1);

    return 0;
}
