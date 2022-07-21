#include <stdio.h>
#include <conio.h>

int main () 
{
    printf("Waiting for badge level 2!\n");
    loop: if (getch() == '2')
    {
        printf("You have earned a pair of extraordinaire badges!\n");
        goto loop;
    }
    else
    {
        printf("You have not earned a pair of extraordinaire badges!\n");
        goto loop;
    }
    clrscr();
    return 0;
}