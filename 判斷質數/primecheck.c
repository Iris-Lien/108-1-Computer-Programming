#include<stdio.h>
#include<stdlib.h>
main()
{
    int i = 2;
    int x;
    scanf("%d", &x);
    while(i < x)
    {
        if((x % i == 0))
            {break;}
        i++;
    }
    if(i == x) //prime number only divided by 1 and itself
        {printf("0");} //is a prime number
    else
        {printf("1");} // is not a prime number

}
