#include <stdio.h>
#include <stdlib.h>

int main()
{
    char N;
    int cond = 0, sum = 0;
    scanf("%c", &N);
    while(N != '0' || sum != 0)
    {
        if (N >= '0' && N <= '9') //判斷N是不是9的倍數及有沒有包含9
        {
            int n = N - '0';
            sum += n; //算每個位數的總和
            if (n == 9)
            {
                cond = 1; //有成立
            }
        }
        else //讀到雜訊
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
