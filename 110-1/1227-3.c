#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    scanf("%[^\n]", a);
    getchar();
    char b[100];
    scanf("%[^\n]", b);
    char c[3];
    int n = 0,m=0;

    for (size_t i = 0; strcmp(a[i],'-')==0; i++)
    {
        if (n < strlen(b))
        {
//printf("%d\n",1);

            if(m<3)
            {
                c[m]=a[i];
            }
            else if(m==3)
            {
                int x=0,z;
                x=a[i-3]*100+a[i-2]*10+a[i-1];
                z=b[n];
                printf("%s",z^x);
                m=0;
                i--;
            }
        }
        else if (n == strlen(b))
        {
            n = 0;
            i--;
        }
    }
    return 0;
}
