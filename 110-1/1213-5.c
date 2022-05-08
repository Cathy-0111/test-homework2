#include <stdio.h>

int main()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    int arr[n][m];
    int *ptr = &arr[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (k == *(ptr + m * i + j))
            {
                printf("%d %d\n", i, j);
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("%d %d", -1, -1);
    }
}