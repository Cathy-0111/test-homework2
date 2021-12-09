#include <stdio.h>
#include <ctype.h>
#include<string.h>

int main()
{
    char arr[100];
    scanf("%[^\n]", arr);

    for (int i = 0; i < strlen(arr); i++)
    {
        if (isupper(arr[i]) != 0)
        {
            arr[i]=tolower(arr[i]);
        }
        else if (islower(arr[i]) != 0)
        {
            arr[i]=toupper(arr[i]);
        }
    }

    printf("%s",arr);
    return 0;
}