#include <stdio.h>
#include <string.h>

typedef struct in
{
    char id[20];
    char name[20];
    int score1;
    int score2;
    int score3;
} student;

int main()
{
    int n;
    scanf("%d", &n);
    student inform[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%s", inform[i].id);
        scanf("%s", inform[i].name);
        scanf("%d", &inform[i].score1);
        scanf("%d", &inform[i].score2);
        scanf("%d", &inform[i].score3);
        getchar();
    }
    printf("====menu====\nf: find specific student data\ns: show all students' data\nd: show the sorted students' data(high to low)\na: show the sorted students' data(low to high)\nb: show the average score value\nq: quit\n");
    printf("function choice: ");

    while (1)
    {
        char type[2];
        scanf("%s", type);
        if (strcmp(type, "f") == 0 || strcmp(type, "s") == 0 || strcmp(type, "b") == 0 || strcmp(type, "a") == 0 || strcmp(type, "d") == 0 || strcmp(type, "q") == 0)
        {
            if (strcmp(type, "f") == 0)
            {
                char a;
                printf("studen's id: ");
                getchar();
                scanf("%s", &a);
                for (size_t i = 0; i < n; i++)
                {
                    if (strcmp(a, inform[i].id) == 0)
                    {
                        printf("\n");
                        printf("%s\t", inform[i].id);
                        printf("%s\t", inform[i].name);
                        printf("%d\t", inform[i].score1);
                        printf("%d\t", inform[i].score2);
                        printf("%d\n", inform[i].score3);
                    }
                    else
                    {
                        printf("No such student");
                    }
                }
            }

            else if (strcmp(type, "s") == 0)
            {
                for (size_t i = 0; i < n; i++)
                {
                    printf("%s\t%s\t%d\t%d\t%d\n", inform[i].id, inform[i].name, inform[i].score1, inform[i].score2, inform[i].score3);
                }
            }

            else if (strcmp(type, "b") == 0)
            {
                for (size_t i = 0; i < n; i++)
                {
                    printf("%2f\n", (float)(inform[i].score1 + inform[i].score2 + inform[i].score3) / 3);
                }
            }
            else if (strcmp(type, "q") == 0)
            {
                break;
            }
            else if (strcmp(type, "a") == 0)
            {
                !!!!
            }
            else if (strcmp(type, "d") == 0)
            {
                !!!!
            }
        }
        else
        {
            printf("Error");
        }
    }

    return 0;
}