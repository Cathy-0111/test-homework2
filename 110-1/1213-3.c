#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int  flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int max = 0, min = 10000;
            for (int k = 0; k < n; k++)
            {
                if (max < arr[i][k])
                {
                    max = arr[i][k];
                }
                if (min > arr[k][j])
                {
                    min = arr[k][j];
                }
            }

            if (arr[i][j] == max && arr[i][j] == min)
            {
                printf("(%d,%d) = %d\n", i, j, arr[i][j]);
                flag = 1;
            }
        }
    }

    if (flag == 0)
    {
        printf("NONE");
    }

    return 0;
}