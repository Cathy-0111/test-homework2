#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    int count[52] = {0};
    int n = 1;

    scanf("%[^\n]", arr);
    getchar();
    for (size_t i = 0; i < strlen(arr); i++)
    {
        char c;
        c = arr[i];

        if (c == ' ')
        {
            n++;
        }
        else if ((int)c >= 97)
        {
            count[((int)c % 97)] += 1;
        }
        else
        {

            count[((int)c % 65 + 26)]++;
        }

        //printf("!!!%d\n", (int)c);
    }

    printf("%d\n", n);
    
    for (size_t i = 0; i < 52; i++)
    {

        if (count[i] != 0 && i < 26)
        {
            printf("%c=%d\n", (char)(i + 97), count[i]);
        }
        else if (count[i] != 0 && i > 26)
        {
            printf("%c=%d\n", (char)(i %26)+65, count[i]);
        }
    }
}