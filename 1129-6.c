
#include <stdio.h>
#include <string.h>

int main()
{
    int arr1[3][3],arr2[3][3],arr[3][3];
    int *ptr;
    ptr=&arr[0][0];
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }


    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            int sum=0;
            for (size_t k = 0; k < 3; k++)
            {
                sum+=arr1[i][k]*arr2[k][j];
            }
            *(ptr+3*i+j)=sum;
        }
    }
    
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%3d\t", arr[i][j]);
        }
        printf("\n");
    }

}
