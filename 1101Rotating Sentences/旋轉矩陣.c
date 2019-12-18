#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
    char input[1000][1000];
    int i,j;
    i = j = 0;
    int max=0, num;
    while(scanf("%c",&(input[i][j]) )!=EOF)
    {
        if (input[i][j] == '\n')
        {
            if (max < j)
                max = j;
            input[i][j] = '\0';
            i++;
            j = 0;
        }
        else j++;
    }
    num=i;
    for (j = 0; j < max; j++)
    {
        for (i=num-1; 0 <= i;i--)
        {
            if (j >= strlen(input[i]))
                printf(" ");
            else
                printf("%c", input[i][j]);
        }
        printf("\n");
    }
    return 0;
}
