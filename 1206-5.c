#include <stdio.h>
#include<ctype.h>

int main()
{
    char c1;
    scanf("%c",&c1);

    if (isupper(c1)!=0)
    {
        printf("%s\n","uppercase");
    }
    else if(islower(c1)!=0)
    {
        printf("%s\n","lowercase");
    }
    else
    {
        printf("%s\n","special character");
    }
    return 0;
}