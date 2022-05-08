#include <stdio.h>
#include <ctype.h>

int main()
{
    char a[100];
    char data[100];
    char arr[26][2] =
        {
            {'b', 'c'}, {'c', 'z'}, {'d', 'a'}, {'e', 'q'}, {'f', 's'}, {'g', 'd'}, {'h', 'f'}, {'i', 'y'}, {'j', 'g'}, {'k', 'h'}, {'l', 'j'}, {'m', 'b'}, {'n', 'v'}, {'o', 'u'}, {'p', 'i'}, {'r', 'w'}, {'t', 'e'}, {'u', 't'}, {'v', 'x'}, {'y', 'r'}, {'[', 'o'}, {']', 'p'}, {';', 'k'}, {'\'', 'l'}, {',', 'n'}, {'/', 'm'}};


    while (scanf(" %[^\n]", a) != EOF)
    {
        for (int i = 0; i < 100; i++)
        {
            if (isalpha(a[i] != 0))
            {
                tolower(a[i]);
            }

            if (a[i] - 'b' > 0)
            {
                data[i] = arr[a[i] - 'b'][2];
                printf("%c", data[i]);
            }

            
            else if (a[i] - 'b' < 0 && a[i] != ' ')
            {
                
                switch (a[i] - 'b')
                {
                case -7:
                    printf("%c", arr[20][2]);
                    break;
                case -5:
                    printf("%c", arr[21][2]);
                    break;
                case -39:
                    printf("%c", arr[23][2]);
                    break;
                case -59:
                    printf("%c", arr[23][2]);
                    break;
                case -54:
                    printf("%c", arr[24][2]);
                    break;
                case -51:
                    printf("%c", arr[25][2]);
                    break;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}