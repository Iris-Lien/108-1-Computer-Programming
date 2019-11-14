#include<stdio.h>
#include<math.h>

int primecheck(int x)
{
    int i=2;
    while (i<x)
    {
        if ((x%i)==0)
        break;
        ++i;
    }
    if (i==x)
        return(0);
    else
        return(1);
}

main()
{
  int a,b,c;
  int i,j,k;
  int count=0;
  scanf("%ld",&a);
  for (b=2;b<a;++b)
  {
    for (c=2;c<a;++c)
    {
     j=primecheck(b),k=primecheck(c);
     if ((j==0) && (k==0) && (b+c==a) && (b<=c))
     {
         //printf("%4ld + %4ld = %4ld\n",b,c,a);
        count +=1;
     }

    }
  }

  printf("%d",count);
}

