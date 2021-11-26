#include <stdio.h>

int main()
{
    char tmp;
    int arr[3][10];
    int sum;

    for (int i = 0; i <10; i++)
    {
        scanf("%c",&tmp);
        if(tmp==' '||tmp=='\n')
        {
            i--;
        }
        else if(tmp=='X')
        {
            arr[0][i]=10;
        }
        else
        {
            arr[0][i]=tmp-'0';
        }
    }
    
    arr[1][0]=arr[0][0];
    arr[2][0]=arr[0][0];
    
    for (int j = 1; j < 3; j++)
    {
        for (int i= 1; i < 10; i++)
        {
            arr[j][i]=arr[j-1][i]+arr[j][i-1];
        }
    }
    
    
    if (arr[2][9]%11==0)
    {
        printf("%s","YES");
    }else{
        printf("%s","NO");
    }
    
    return 0;
}