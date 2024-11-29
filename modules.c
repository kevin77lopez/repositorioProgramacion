#include <stdio.h>
#include <cs50.h>

void say_meow(int times)
{
    for(int i = 0; i < times; i++)
    {
        printf("%i meow\n", i+1);
    }
}

int get_positive_int (void)
{
    int num;
    do
    {
        num = get_int("How many times do you like to say meow: ");
    }
    while(num<0);
    return num;
}

//entry point: Method main to execute
int main (void)
{
    int num = get_positive_int();
    say_meow(num);
}
