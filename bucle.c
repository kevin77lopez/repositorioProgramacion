#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string answer = get_string("what's your name?: ");
    string m1 = strcat(answer, " yupiiiii!!!");
    printf("%s\n", m1);
    return 200;
}
