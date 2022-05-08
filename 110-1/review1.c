#include <stdio.h>
#include <stdlib.h>

void printString(char *ptr)
{
    if (*ptr == '\0')
    {
        return;
    }

    printString(ptr + 1);
    printf("%s\n", ptr);
}

int main()
{
    char string[100] = "";
    
    scanf("%[^\n]", string);

    printString(string);

    return 0;
}