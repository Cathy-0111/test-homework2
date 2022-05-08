#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char input[1001];
    int b, c, n;
    while (gets(input) != 0)
    {

        int a[257] = {0};
        n = strlen(input);
        for (b = 0; b < n; b++) /*判斷並存入int陣列中*/
        {
            a[input[b]] = a[input[b]] + 1; /*個數的累加*/
        }
        for (b = 1; b < n; b++) /*從各數小*/
        {
            for (c = 256; c >= 0; c--) /*ASCII大的*/
            {
                if (a[c] == b)
                    printf("%d %d\n", c, b);
            }
        }
        printf("\n");
    }
    return 0;
}