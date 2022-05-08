#include <stdio.h>
#include <string.h>



int maim()
{
    char a[20];
    char b[20];
    scanf("%s", a);
    scanf("%s", b);
    int c[20];
    int d[20],z,x;
    for (size_t i = 0; i < strlen(a); i++)
    {
        int n=0;
        if (strcmp(a[i],".")!=0)
        {
            if (n==2)
            {
               z=c[i-2] *10+c[i-1];
            }
            else if (n==3)
            {
                x=c[i-3] *100+c[i-2]*10+c[i-1];
            }
            n=0;
        }
        else
        {
            c[i]=(int)a[i];
            n++;
        }
    }
    printf("%d",x);
}


/*
int main()
{
    char a[20];
    char b[20];
    scanf("%s", a);
    scanf("%s", b);

    int c[20];
    int d[20];
    int n = 0, m = 0, z, x;

    for (int i = 0; i < strlen(a); i++)
    {
        int q = 0, e = 0;

        if (a[i] != '.')
        {
            c[q] = a[i] - '0';
            n++;
        }
        else if (a[i] == '.')
        {
            for (size_t j = 0; j < strlen(b); j++)
            {
                int Q = 0, E = 0;
                if (b[i] != '.')
                {
                    d[q] = b[i] - '0';
                    m++;
                }
                else
                {
                    if (n == 2)
                    {
                        z = c[0] * 10 + c[1];
                    }
                    else if (n == 3)
                    {
                        z = c[0] * 100 + c[1] * 10 + c[2];
                    }

                    if (m == 2)
                    {
                        x = c[0] * 10 + c[1];
                    }
                    else if (m == 3)
                    {
                        x = c[0] * 100 + c[1] * 10 + c[2];
                    }
                    printf("%d%d", z, x);
                    // printf("%d",z&x);
                }
                printf(".");
            }
        }
    }
}
*/