#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);

    while(n != 0)
    {
        if(n < 0 && sum + n < 0)
        {
            printf("%8d%8c", 0, ' ');
        }
        else
        {
            sum += n;
            if(n < 0)
                printf("%8d%8c", -n, ' ');
            else
                printf("%16d", n);
        }
        printf("%12d\n", sum);
        scanf("%d", &n);
    }


    return 0;
}
