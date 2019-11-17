#include <stdio.h>
#include <stdlib.h>

int prime(int number)
{
    int a;
    if(number == 1)
        return 0;   //1 is not a prime number
    else
    {
        for(a = 2 ; a < number ; a++)
        {
            if(number % a == 0)
                return 0;
        }
    }
    return 1;  //number is a prime number
}

int main()
{
    int n, m;
    int i;
    int count = 0;
    scanf("%d", &n);
    for(i = 2 ; i <= (n / 2) ; i++)
    {
        if(prime(i) == 1)
            {
                m = n - i;
                if(prime(m) == 1)
                    count++;
            }
    }
    printf("%d", count);
    return 0;
}
