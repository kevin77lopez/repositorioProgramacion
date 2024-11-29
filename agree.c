#include <stdio.h>
#include <cs50.h>

//My name is Kevin, I'm waiting for the Nintendo switch!

int main(void)
{
    char agree = get_char("do you agree?: ");
    if(agree == 'y' || agree == 'Y') {
        printf("You agreed!.\n");
    }
    else if(agree == 'n' || agree == 'N') {
        printf("you not agreed!.\n");
    }
    else {
    }
        printf("Are you crazy fool?!!.\n");
}
