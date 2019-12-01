#include<stdio.h>
#include<stdlib.h>

main()
{
    int round = 0;
    int m,n;
    int i,j;

    scanf("%d%d",&n,&m);
    int array[n][m];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&(array[i][j]));
        }
    }
     while ( (round < (m / 2) + (m % 2)) && (round < (n / 2) + (n % 2)) ) // 當索引值超過陣列的一半大小 表示已經印完整個陣列（因為是繞圈印出）
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

        if (((m - round * 2) == 1) || ((n - round * 2) == 1)) // 若是矩陣已經縮成 1 x 1 則印出唯一元素（前面的判斷條件無法印出這種狀況）
          printf("%d ", array[i][j]);

        round++;
      }
    return 0;
}
