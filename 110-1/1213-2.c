#include <stdio.h>


void main()
{
    int n;
    scanf("%d",&n);
    int k, i, j, m = 1;
    int a[n][n]; //定義螺旋數組，並初始化
    //螺旋數組的實現
    for (k = 0; k <= n / 2; k++)
    {
        for (j = k; j < n - k; j++)
            a[k][j] = m++;
        for (i = k + 1; i < n - k; i++)
            a[i][n - k - 1] = m++;
        for (j = n - k - 2; j >= k; j--)
            a[n - k - 1][j] = m++;
        for (i = n - k - 2; i > k; i--)
            a[i][k] = m++;
    }
    //輸出螺旋數組
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}