#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num = get_int("Dime el limite a multiplicar: ");
    int limite = get_int("Dime hasta qué número quieres multiplicar: ");

    for(int i=0; i<limite; i++)
    {
        printf("%i x %i = %i\n", num, i+1, num*(i+1));
    }
}
