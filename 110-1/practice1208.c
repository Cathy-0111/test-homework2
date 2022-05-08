#include <stdio.h>

int main()
{
    int n, m;
    scanf("%2d%2d", &n, &m);
    int arr1[n][m],arr2[n][m],arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%3d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%3d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j]=arr1[i][j]+arr2[i][j];
            printf("%3d\t",arr[i][j]);
        }
        puts("\n");
    }
    
    return 0;
}