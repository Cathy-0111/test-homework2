#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr1[n][m];
    int arr2[n][m];
    int *arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int s;
            scanf("%d", &s);
            arr1[i][j] = s;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int s;
            scanf("%d", &s);
            arr2[i][j] = s;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = arr1[i][j] + arr2[i][j];
            printf("%3d\t", arr[i][j]);
        }
        printf("\n");
    }

    //fun1(arr, arr1, arr2, n, m);

    return 0;
}

//void fun1(char **arr, char **arr1, char **arr2, int n, int m)
//{
//}