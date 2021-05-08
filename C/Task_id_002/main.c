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
    while(1){
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
        if(userChoice=='a')
        {
          printf("Good morning.\n");
        }
        else if(userChoice=='b')
        {
          printf("Good evening.\n");
        }
        else if(userChoice=='c')
        {
          printf("Exit The Program.\n");
        }
        else
        {
          printf("Wrong choice.\n");
        }

        printf("Please Enter any Key to return the menu again.");

        userChoice = getch();
        fflush(stdin);

    }

    return 0;
}
