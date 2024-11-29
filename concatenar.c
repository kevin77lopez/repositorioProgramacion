#include <stdio.h>
#include <string.h>

int main(void)
{

    char str1[100] = "Hola, ";
    char str2[] = "Mundo!";

    strcat(str1, str2);

    printf("%s\n", str1);

    return 0;
}
