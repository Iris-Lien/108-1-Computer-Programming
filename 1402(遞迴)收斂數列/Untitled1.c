#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int function(int n, int cycle_length)
{
    if(n==1)
        return ++cycle_length;
    else
    {
        if(n%2!=0)
            n=3*n+1;
        else
            n=n/2;
        cycle_length++;
        return function(n, cycle_length);
    }
}
int main()
{
    int number_a,number_b;
    int i;
    while(scanf("%d%d",&number_a,&number_b)!=EOF)
    {
        printf("%d %d",number_a,number_b);
        int max=0, temp_cycle_len=0;
        if(number_a>number_b)
        {
            int x=number_a;
            number_a=number_b;
            number_b=x;
        }
        for(i=number_a;i<=number_b;i++)
        {
            temp_cycle_len = function(i,0);
            // printf("now: %d\tcycle_lenth: %d\n", i, temp_cycle_len);
            if(temp_cycle_len>max)
                max=temp_cycle_len;
        }
        printf(" %d\n",max);
    }
    return 0;
}
