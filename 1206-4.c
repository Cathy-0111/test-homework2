#include <stdio.h>
#include<string.h>

int main()
{
    char arr[1000];
    char c1,c2;
    scanf("%[^\n]",arr);
    getchar();
    scanf("%c",&c1);
    getchar();
    scanf("%c",&c2);

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i]==c1)
        {
            arr[i]=c2;
        }
        
    }
    printf("%s",arr);
    return 0;
}