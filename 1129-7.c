#include <stdio.h>
#include <string.h>



int main()
{
    char arr1[100];
    gets(arr1);     //把輸入放進arr1      //scanf不能接受空格、制表符Tab、回车等；而gets能够接受空格、制表符Tab和回车等；
    char arr2[100];
    gets(arr2);     //把輸入放進arr2
    combine(arr1, arr2, strlen(arr1), strlen(arr2));
    
}

void combine( char *arr1, char *arr2, int size1, int size2){
    for(int i = 0 ; i < size1 ; i++){
        printf("%c", arr1[i]);
    }
    printf(" ");
    for(int i = 0 ; i < size2 ; i++){
        printf("%c", arr2[i]);
    }

}



/*
#include <stdio.h>
#include <string.h>

int main()
{
    char *data[100];
    int i,c,d;
    char a[50];
    scanf("%[^\n]",a);
    c=strlen(a);

     printf("\n");
    
    char b[50];
    scanf("%[^\n]",b);
    d=strlen(b);

    for (; i<c; i++)
    {
        data[i]=&a[i];
    }
    printf("%c"," ");
    for (int j=0; j<c; j++)
    {
        data[i+1+j]=&b[j];
    }
    
    printf("%s",*data);

    return 0;
}
*/