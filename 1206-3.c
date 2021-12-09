#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char arr[10000];
    scanf("%[^\n]",arr);
    for (int i = 0; i <= strlen(arr); i++)
    {
        if (isupper(arr[i])!=0)
        {
            arr[i]=tolower(arr[i]);
        }
    }
    printf("%s",arr);
    
    return 0;
}