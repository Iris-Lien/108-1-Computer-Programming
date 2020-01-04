/*
iutput ex:          output ex:
5 6 4               0 0 0 0 0 0 
1 1 3               0 3 0 0 0 0 
2 3 6               0 0 0 6 0 0 
3 2 9               0 0 9 0 0 0 
4 4 12              0 0 0 0 12 0 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, column, data;
    int i, j;
    scanf("%d%d%d", &row, &column, &data);
    int array[row][column];
    for(i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < column ; j++)
        {
            array[i][j] = 0;
        }
    }
    for(i = 0 ; i < data ; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        array[a][b] = c;
    }
    for(i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < column ; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
