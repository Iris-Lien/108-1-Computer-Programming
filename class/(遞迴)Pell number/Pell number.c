#include<stdio.h>
#include<stdlib.h>

int Pell(int n)
{
    if(n==0||n==1)
        return n;
    return 2*Pell(n-1)+Pell(n-2);
}
int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        printf("%d\n",Pell(x));
    }
    return 0;
}
