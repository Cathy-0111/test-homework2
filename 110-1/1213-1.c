#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    char arr[n][m];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    int flag=0;

    for (int i = 1; i < n-1; i++)
    {
        for (int j = 1; j < m-1; j++)
        {
            if (arr[i][j]>arr[i-1][j]&&arr[i][j]>arr[i][j-1]&&arr[i][j]>arr[i][j+1]&&arr[i][j]>arr[i+1][j])
            {
                printf("%d %d %d",arr[i][j],i+1,j+1);
                printf("\n");
                flag=1;
            }
            
        }
    }

    if (flag==0)
    {
        printf("None %d %d",n,m);
    }
    
    return 0;
}