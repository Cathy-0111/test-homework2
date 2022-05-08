#include<stdio.h>

int main()
{
    char arr[1];
    scanf("%s",arr[1]);
    printf("%d",(int)arr);
    //printf("%d",(int)'a');
}

/*
#include <stdio.h>

typedef struct test
{
    char name;
    struct test *nextptr;
};

typedef struct stacknode stacknode;
typedef stacknode *stacknodeptr;

int main()
{
    stacknodeptr stackptr = NULL;
    char name;

    while (name != EOF)
    {
        printf("Enter name: ");
        scanf("%s", &name);
        push(&stackptr, name);
        printfstack(stackptr);
    }
}

void push(stacknodeptr topptr, char info)
{
    stacknodeptr newptr = malloc(sizeof(stacknode));
    if (newptr != NULL)
    {
        newptr -> data = info;
        newptr -> nextptr = *topptr;
        *topptr = newptr;
    }
}

void printstack(stacknodeptr currentptr)
{
    while (currentptr != NULL)
    {
        printf("%s ", currentptr ->nextptr);
    }
}
*/

/*
int main()
{
    int *a;
    int b;
    a=&b;
    //a=&n;
    for (int n = 1; n < 3; n++)
    {
        for (int m = 1; m < 4; m++)
        {
            printf("%p ",a);
            *a=n*m;
            printf("%p ",a);
            printf("%d ",b);
        }
        printf("\n");
    }

    //printf("%p %d\n ",&n,n);
    //printf("%p %d",a,*a);
    return 0;
}
*/