#include <stdio.h>

void fun(int n);
void fun(int n)
{
    int flag = 0, i;
    for (i = 2; i < n / 2 + 1; i++) //判斷i是否為n的因數
    {
        if (n % i == 0)
        {
            flag = 1;
            for (int j = 2; j < i / 2 + 1; j++) //判斷i是否為質數
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                printf("%d %d \n", i, n / i);
                break;
            }
        }
    }

    if (flag == 0)
    {
        printf("%s", "No");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    fun(n);
}