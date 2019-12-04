#include<stdio.h>
#include<stdlib.h>

main()
{
    int round = 0;
    int m,n;
    int i,j;

    scanf("%d%d",&m,&n);
    int array[m][n];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&(array[i][j]));
        }
    }
     while ( (round < (m / 2) + (m % 2)) && (round < (n / 2) + (n % 2)) )
     {
        i = j = round;

        for (; j < n - round - 1; j++)
          printf("%d ", array[i][j]);

        for (; i < m - round - 1; i++)
          printf("%d ", array[i][j]);

        for (; round < j; j--)
          printf("%d ", array[i][j]);

        for (; round < i; i--)
          printf("%d ", array[i][j]);

        if (((m - round * 2) == 1) && ((n - round * 2) == 1))
          printf("%d ", array[i][j]);

        round++;
      }
    return 0;
}
