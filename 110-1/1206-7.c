#include <stdio.h>
#include <string.h>

int main()
{
    //   freopen ("input.txt","rt",stdin);
    char sentence[101][101];
    int n = 0, length[101];
    int max = 0;
    while (gets(sentence[n]))
    {
        length[n] = strlen(sentence[n]);
        if (length[n] > max)
            max = length[n];
        n++;
    }
    for (int i = 0; i < max; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i < length[j])
                printf("%c", sentence[j][i]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}