#include <stdio.h>
#include <stdlib.h>

int array[1000]={0};
int count_gcd=0,count_0=1;

void func(int number)
{
    int i;

    if(number>0)
    {
        count_gcd=0,count_0=1;
        for(i=1;i<= number;i++)
        {
            if(number%i==0)
            {
                array[count_gcd]=i;
                //printf("%d\n", i);
               // printf("array[count_gcd]:%d\n", array[count_gcd]);
                count_gcd++;
            }
        }
        printf("%d\n", array[0]);
        //printf("%d\n",count_gcd);
    }
    else if(number==0)
    {
        printf("%d\n",array[count_0%count_gcd]);
        count_0++;
    }
}

int main()
{
    int number;
    int array[1000]={0};
    int i;
    int count_gcd=0,count_0=1;
    while(scanf("%d",&number)!=EOF)
    {
        if(number<0){break;}
        else
        {
            func(number);
        }
    }

    return 0;
}
