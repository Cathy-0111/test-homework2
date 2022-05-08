#include <stdio.h>
#include <string.h>
int main()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    int a[n][m];
    int *aptr = &a[0][0];
    // aptr ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (*(aptr + m * i + j) == k)
            {
                x++;
            }
        }
    }

    printf("%d", x);
    return 0;
}
