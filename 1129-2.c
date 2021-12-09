#include <stdio.h>

int main()
{
    char *typePtr;
    char TypePtr;
    scanf("%c", &TypePtr);
    typePtr=&TypePtr;
    if (*typePtr == 'a')
    {
        for (int i = 0; i < 26; i++)
        {
            printf("%c\t", (*typePtr)+i);
        }
    }
    else if (*typePtr == 'A')
    {
        for (int i = 0; i < 26; i++)
        {
            printf("%c\t", (*typePtr)+i);
        }
    }

    return 0;
}