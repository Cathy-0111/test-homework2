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

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                flag = 1;
                break;
            }
        }
        if (flag==1)
        {
            flag = 1;
            break;
        }
    }

    if (flag==0)
    {
        puts("equal");
    }
    else
    {
        puts("Not equal");
    }
    return 0;
}