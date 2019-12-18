#include<stdio.h>
#include<stdlib.h>

int square_sum(int i)
{
    if(i==1)
        return 1;
    return square_sum(i-1) + i * i;
}
main()
{
    int n;
    scanf("%d",&n);
    printf("%d",square_sum(n));
    return 0;
}
