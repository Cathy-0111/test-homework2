#include <stdio.h>

int main()
{
    int i=0;
    int tex=0;
    char arr[500];
    
    
        while (scanf(" %[^\n]",arr)!=EOF)
        {
            for (int i = 0; arr[i]!='\0'; i++)
            {
                if (arr[i]=='"'&&tex==0)
                {
                    for (int a = 0; a < 2; a++)
                    {
                        arr[i]='`';
                        printf("%c",arr[i]);
                    }
                    tex=1;
                }
                else if(arr[i]=='"'&&tex==1)
                {
                    for (int b = 0; b <2; b++)
                    {
                        arr[i]='\'';
                        printf("%c",arr[i]);
                    }
                    tex=0;
                }
                else
                {
                    printf("%c",arr[i]);
                }
        
            }
            printf("\n");
        }
        return 0;
    }
    