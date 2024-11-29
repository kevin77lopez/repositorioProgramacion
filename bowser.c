#include <stdio.h>
#include <cs50.h>

void print_matrix(int number);
int main(void)
{
    int matrix = get_int("Introduce el numero de tu matriz:");
    print_matrix(matrix);
}


void print_matrix(int number)
{
    for(int i=0; i<number; i++)
    {
        for(int j=0; j<number; j++)
        {
             printf("# ");
        }
        printf("\n");
    }
}






void print_rows(int times)
{
    for(int i=0; i< times; i++)
    {
    printf("#");
    }
    printf("\n");
}
