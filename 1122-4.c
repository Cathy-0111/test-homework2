#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int data[n];
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&a[j]);
    }

    for (int j = 0; j <n; j++)
    {
        int tmp;
        tmp=a[j];

        data[j]=0;
        
        while (tmp>0)
        {
            data[j]+=tmp%10;
            tmp/=10;
        }
    }

    for (int j = 0; j <n; j++)
    {
        printf("%d ",data[j]);
    }
    printf("\n");

   

    for (int i = 0; i < n; i++)
    {
        int tmp;
        int tmp1;
        for (int j =i+1; j <n; j++)
        {
            if (data[i]>data[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;

                tmp1=data[i];
                data[i]=data[j];
                data[j]=tmp1;
            }
            else if(data[i]==data[j])
            {
                if (a[i]>a[j])
                {
                    tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;

                    tmp1=data[i];
                    data[i]=data[j];
                    data[j]=tmp1;
                }
            }
        }
        
    }
    

    for (int j = 0; j <n; j++)
    {
        printf("%d ",a[j]);
    }
    

    return 0;
}