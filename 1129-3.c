#include <stdio.h>

int main()
{
    char A[50];
    scanf("%[^\n]",A);
    int i=0;

    for (;A[i]!='\0';)
    {
        i++;
    }
    
    char *a[i];

    for (int j = 0; j <i; j++)
    {
        a[j]=&A[i-1-j];
        printf("%c",*a[j]);
    }
    
    return 0;
}