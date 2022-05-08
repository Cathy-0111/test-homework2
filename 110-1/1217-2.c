#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    scanf("%[^\n]", a);
    getchar();
    char b[20];
    scanf("%[^\n]", b);

    int n = 0;
    for (size_t i = 0; i < strlen(a); i++)
    {
        if (n < strlen(b))
        {
            char c, d;
            c = a[i];
            d = b[n];
            if((c^d)/100>0)
            {
                printf("%d", c ^ d);
            }
            else if ((c^d)/100==0&&(c^d)/10>0)
            {
                printf("0");
                printf("%d", c ^ d);
            }
            else
            {
                printf("00");
                printf("%d", c ^ d);
            }
            
            n++;
        }
        else if (n == strlen(b))
        {
            n = 0;
            i--;
            //printf("\t%d\n", n);
        }
    }
    //printf("%d",0);
    printf("-%s","01");
    return 0;
}
