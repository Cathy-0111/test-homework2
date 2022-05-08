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

    int flag=0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(arr[i][j]!=0)
            {
                flag=1;
            }
        }
        if (flag==1)
        {
            printf("N0");
            break;
        }
    }
    if(flag==0)
    {
        printf("Yes");
    }
    return 0;
}