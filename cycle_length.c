#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_a, number_b, i, j, cycle_length = 0, temp, x;
    while(scanf("%d%d", &number_a, &number_b) != EOF)
    {
      	cycle_length = 0;
        printf("%d %d", number_a, number_b);
        if(number_a > number_b)
        {
            x = number_a;
            number_a = number_b;
            number_b = x;
        }
        for(i = number_a ; i <= number_b ; i++)
        {
            temp = 1;
            j = i ;
            while(j != 1)
            {
                if(j % 2 != 0)
                {
                    j = 3 * j + 1;
                }
                else
                {
                    j = j / 2;
                }
                temp++;
            }
            if(temp > cycle_length)
                cycle_length = temp;

        }

		 printf(" %d\n", cycle_length);
    }

    return 0;
}
