#include <stdio.h>

int main()
{
    int n, flag = 0;
    scanf("%d", &n);

    if (n >= 4 && n % 2 == 0)
    {
        for (int i = 2; i < n/2+1; i++)
        {
            flag=0;

            for (int j = 2; j < i / 2 + 1; j++)
            {
                if (i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
            {
                for (int j = 2; j < (n - i) / 2 + 1; j++)
                {
                    if ((n - i) % j == 0)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 0)
            {
                printf("%d+%d\n", i, n - i);
            }

        }
    }

    return 0;
}