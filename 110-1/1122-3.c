#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char arr[100];
    int n=0,m=0;
    scanf("%s",arr);
    for (size_t i = 0; i < strlen(arr); i++)
    {
       if(isblank(arr[i])!=0&&isblank(arr[i+1]==0))
       {
           n++;
       }
       else if(isalpha(arr[i])!=0)
       {
           if (m==0)
           {
               for (size_t j = i+1; j < strlen(arr); j++)
               {
                   if (arr[j]==arr[i])
                   {
                       m++;
                   }                  
               }
               printf("%c=%d",arr[i],m)
           }
           
       }
    }
    
    return 0;
}