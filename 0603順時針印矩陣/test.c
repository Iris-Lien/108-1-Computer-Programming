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
     while ( (round < (m / 2) + (m % 2)) && (round < (n / 2) + (n % 2)) ) // ����ޭȶW�L�}�C���@�b�j�p ��ܤw�g�L����Ӱ}�C�]�]���O¶��L�X�^
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

        if (((m - round * 2) == 1) || ((n - round * 2) == 1)) // �Y�O�x�}�w�g�Y�� 1 x 1 �h�L�X�ߤ@�����]�e�����P�_����L�k�L�X�o�ت��p�^
          printf("%d ", array[i][j]);

        round++;
      }
    return 0;
}
