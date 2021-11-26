#include <stdio.h>

int main()
{
    int arr[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
    char tmp[10];
    int a[11];
    scanf("%s",tmp);
    int p;

    printf("%s\n",tmp);


    for (int i = 0; i <11; i++)
    {
        if (i==0)
        {
            a[0]=arr[tmp[0]-'A']/10;
        }
        else if(i==1)
        {
            a[1]=arr[tmp[0]-'A']%10;
        }
        else
        {
            a[i]=tmp[i-1]-'0';
        }
    }

    for (int i = 0; i <11; i++)
    {
            printf("%d ",a[i]);
    }
    printf(" %d ",arr[tmp[0]-'A']/10);
    printf("\n");

    p=a[0]+a[1]*9+a[2]*8+a[3]*7+a[4]*6+a[5]*5+a[6]*4+a[7]*3+a[8]*2+a[9]+a[10];

    printf("%d\n",p);

    if (p%10==0)
    {
        printf("%s\n","CORRECT!!!");
    }
    else
    {
        printf("%s\n","WRONG!!!");
    }
    
    return 0;
}