#include <stdio.h>
#include <stdlib.h>

int main()
{
    char N;
    int cond = 0, sum = 0;
    scanf("%c", &N);
    while(N != '0' || sum != 0)
    {
        if (N >= '0' && N <= '9') //�P�_N�O���O9�����ƤΦ��S���]�t9
        {
            int n = N - '0';
            sum += n; //��C�Ӧ�ƪ��`�M
            if (n == 9)
            {
                cond = 1; //������
            }
        }
        else //Ū�����T
        {
            if (sum != 0)
            {
                if (sum % 9 == 0 && cond == 1)
                {
                    printf("Nines");
                }
                else if (sum % 9 == 0)
                {
                    printf("Nines without nines");
                }
                else
                {
                    printf("Not nines");
                }
                printf("\n");
                sum = cond = 0;
            }
        }
        scanf("%c", &N);
    }



    return 0;
}
