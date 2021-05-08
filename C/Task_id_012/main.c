#define HOME        71
#define END         79
#define UP          72
#define DOWN        80
#define ESC         27
#define TAB          9
#define ENTER       13



#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void showMenu(int index);

int main() {
        char Key=0;
        int index =1;
		do
		{
		    showMenu(index);
            Key = getch();
            if (Key == UP)
            {
                if(index==1)
                    index=3;
                else
                    index--;
            }
            if (Key == DOWN||Key == TAB)
            {
                if(index==3)
                    index=1;
                else
                    index++;
            }
            if (Key == HOME)
                index=1;
            if (Key == END)
                index=3;

            system("cls");
            if (Key == ENTER)
            {
                if(index==1)
                {
                    printf("new");
                    break;

                }

                else if(index==2)
                {
                    printf("display");
                    break;
                }
                else
                    break;
            }


		}
		while (Key != ESC); // 27 = Escape key
		return 0;
}
void showMenu(int index)
{
    if(index==1)
        printf("NEW_\n\nDisplay\n\nExit\n");
    else if(index==2)
        printf("NEW\n\nDisplay_\n\nExit\n");
    else if(index==3)
        printf("NEW\n\nDisplay\n\nExit_\n");
    else;

}

