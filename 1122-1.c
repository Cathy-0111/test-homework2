#include <stdio.h>

void fun1(float *arr,int n)
{
     for(int j=0;j<n;j++)
     {
         for (int k = j+1; k<n; k++)
         {
             if (arr[j]>arr[k])
             {
                 float tmp=arr[j];
                 arr[j]=arr[k];
                 arr[k]=tmp;
             }
             
         }
         printf("%g ",arr[j]);
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    float arr[n];
    for (int m = 0; m < n; m++)
    {
        scanf("%f",&arr[m]);
    }

    fun1(arr,n);
    
}