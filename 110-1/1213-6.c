#include <stdio.h>
#include <string.h>

void strRev(char *str, int len)
{
    int i=0;
    if (i == strlen(str) - 1)
    {

        return;
    }
    else if (i < strlen(str) - 1)
    {
        for (int j = strlen(str) - 1 - i; j < strlen(str); j++)
        {
            printf("%c", str[j]);
            return strRev(str, strlen(str));
        }
        i++;
        printf("\n");
    }
}

int main()
{
    char arr[1000];
    scanf("%[^\n]", arr);
    strRev(arr, strlen(arr));
    return 0;
}