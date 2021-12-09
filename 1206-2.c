#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100], c;
    scanf("%s", &arr);
    getchar(); //吃掉scanf("%s",&arr);的回車鍵
    scanf("%c", &c);
    getchar();

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] != c)
        {
            printf("%c", arr[i]);
        }
        else if (i != 0 && arr[i] == c)
        {
            printf("\n");
        }
    }
    // printf("\n");
    return 0;
}