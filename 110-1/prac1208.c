#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int t=0;
    for (int i = 0; i < n; i++)
    {
        t=arr[i][i];
        arr[i][i]=arr[i][n-1-i];
        arr[i][n-1-i]=t;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}