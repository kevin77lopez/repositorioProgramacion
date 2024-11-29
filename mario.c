#include <stdio.h>
#include <cs50.h>

void print_blocks_horizontal(int numBlocks);
void print_blocks_vertical(int numBlocks);

int main(void)

{
    int num = get_int("cuanto bloques quieres?: ");

    print_blocks_horizontal(num);
    print_blocks_vertical(num);

}

void print_blocks_horizontal(int numBlocks)
{
    string block = "|?|";
    for (int i=0; i<numBlocks; i++)
    {
    printf("%s", block);
    }
    printf("\n");
}

void print_blocks_vertical(int numBlocks)
{
    string block = "|?|";
    for (int i=0; i<numBlocks; i++)
    {
    printf("%s\n", block);
    }
    printf("\n");
}
