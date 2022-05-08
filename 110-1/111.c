#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *cPtr;
    typedef struct studentdata
    {
        int number;
        char id[10];
        char LastName[15];
        char FirstName[10];
        int score[3];
    } student;

    int type = 8;
    printf("%s\n", "===== Menu =====");
    printf("%s\n", "1 - create a new file.");
    printf("%s\n", "2 - Open an existed file.");
    printf("%s\n", "3 - Insert a score data");
    printf("%s\n", "4 - Find a specific student data");
    printf("%s\n", "5 - Update a specific student data ");
    printf("%s\n", "6 - Delete a specific student data");
    printf("%s\n", "7 - List all of student score data");
    printf("%s\n", "0 - Exit");

    while (type != 0)
    {
        scanf("%d", &type);
        switch (type)
        {
        case 1:
            if (cPtr = fopen("score1.txt", "r") == NULL)
            {
                cPtr = fopen("score1.txt", "w");
                // fscanf("%d%s%s%s%d", &number, id, LastName, FirstName, score);
            }
            else
            {
                char ans;
                printf("The file is existed.\nDo you want to over write it?(Y/N)");
                scanf("%s", &ans);
                int check;
                check = strcmp(ans, "Y");
                if (check != 0)
                {
                    cPtr = fopen("score1.txt", "w");
                    // fscanf("%d%s%s%s%d", &number, id, LastName, FirstName, score);
                }
                // else
                //{
                // cPtr = fopen("score1.txt", "w+");
                // fscanf("%d%s%s%s%d", &number, id, LastName, FirstName, score);
                //}
            }
            break;
        case 2:
            cPtr = fopen("score1.txt", "rb+");
            break;
        case 3:
            cPtr = fopen("score1.txt", "rb+");
            while (student.number != 0)
            {
                printf("Enter student number(0 to end input): ");
                fscanf("%d\n" ,student.number);
                printf("Enter ID, firstname, lastname, score1, score2, score3: ");
                fscanf("%s%s%s%d%d%d", student.id, student.LastName, student.FirstName, student.score[0], student.score[1], student.score[2]);
            }
            break;
        case 4:
            cPtr = fopen("score1.txt", "rb+");
            
            
        }
    }
    fclose(cPtr);
}

/*
        int g = 1;

        while (1)
        {

            g++;
            if (check == 0)
            {
                char idid[2][10];
                int num = 0;
                if (strcmp(choice, "f") == 0)
                {
                    printf("%s", "Student's ID: ");
                    getchar();
                    scanf("%s", &idid[0]);
                    for (int n = 0; n < number; n++)
                    {
                        char str1[10];
                        for (int x = 0; x < 9; x++)
                        {
                            str1[x] = idid[0][x];
                        }

                        char str2[10];
                        strcpy(str2, data[n].id);
                        int e = strcmp(str1, str2);
                        if (e == 0)
                        {
                            printf("%-16s%-8s%-8d%-8d%-8d\n", data[n].id, data[n].name, data[n].math, data[n].computer, data[n].english);
                            printf("%s\n", "----------");
                            num++;
                        }
                    }
                    if (num == 0)
                    {
                        printf("%s\n", "No such student");
                        printf("%s\n", "----------");
                    }
                }
                else if (strcmp(choice, "s") == 0)
                {
                    for (int n = 0; n < number; n++)
                    {
                        printf("%-16s%-8s%-8d%-8d%-8d\n", data[n].id, data[n].name, data[n].math, data[n].computer, data[n].english);
                    }
                    printf("%s\n", "----------");
                }
                else if (strcmp(choice, "d") == 0)
                {
                    float average[number + 1][2];
                    for (int n = 0; n < number; n++)
                    {
                        average[n][1] = n;
                        average[n][0] = (data[n].math + data[n].computer + data[n].english) / 3;
                    }
                    for (int x = 0; x < number; x++)
                    {
                        for (int y = x; y < number; y++)
                        {
                            if (average[x][0] < average[y][0])
                            {
                                float a = average[x][0];
                                average[x][0] = average[y][0];
                                average[y][0] = a;
                                float b = average[x][1];
                                average[x][1] = average[y][1];
                                average[y][1] = b;
                            }
                        }
                    }
                    for (int n = 0; n < number; n++)
                    {
                        int c = (int)average[n][1];
                        printf("%-16s%-8s%-8d%-8d%-8d\n", data[c].id, data[c].name, data[c].math, data[c].computer, data[c].english);
                    }
                    printf("%s\n", "----------");
                }
                else if (strcmp(choice, "a") == 0)
                {
                    float average[number + 1][2];
                    for (int n = 0; n < number; n++)
                    {
                        average[n][1] = n;
                        average[n][0] = (data[n].math + data[n].computer + data[n].english) / 3;
                    }
                    for (int x = 0; x < number; x++)
                    {
                        for (int y = x; y < number; y++)
                        {
                            if (average[x][0] > average[y][0])
                            {
                                float a = average[x][0];
                                average[x][0] = average[y][0];
                                average[y][0] = a;
                                float b = average[x][1];
                                average[x][1] = average[y][1];
                                average[y][1] = b;
                            }
                        }
                    }
                    for (int n = 0; n < number; n++)
                    {
                        int c = (int)average[n][1];
                        printf("%-16s%-8s%-8d%-8d%-8d\n", data[c].id, data[c].name, data[c].math, data[c].computer, data[c].english);
                    }
                    printf("%s\n", "----------");
                }
                else if (strcmp(choice, "b") == 0)
                {
                    float average[number + 1][2];
                    for (int n = 0; n < number; n++)
                    {
                        average[n][1] = n;
                        average[n][0] = (data[n].math + data[n].computer + data[n].english) / 3;
                    }
                    for (int x = 0; x < number; x++)
                    {
                        for (int y = x; y < number; y++)
                        {
                            if (average[x][0] < average[y][0])
                            {
                                float a = average[x][0];
                                average[x][0] = average[y][0];
                                average[y][0] = a;
                                float b = average[x][1];
                                average[x][1] = average[y][1];
                                average[y][1] = b;
                            }
                        }
                    }
                    for (int n = 0; n < number; n++)
                    {
                        int c = (int)average[n][1];
                        float d = average[n][0];
                        printf("%-16s%-8s%-.2f\n", data[c].id, data[c].name, d);
                    }
                    printf("%s\n", "----------");
                }
                else if (strcmp(choice, "q") == 0)
                {
                    exit(EXIT_FAILURE);
                }
            }
            else
            {
                printf("%s\n", "Error");
            }
        }
        */