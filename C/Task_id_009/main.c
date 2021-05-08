#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    unsigned char key;
    printf("Enter any key: ");
    key = getch();
    system("cls");
    printf("Ascii Code is: %d",key);
    return 0;
}
