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
            scanf("%d",&arr[i][j]);
        }
    }

    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i][i];
    }

    printf("%d\t",sum);
    return 0;
}