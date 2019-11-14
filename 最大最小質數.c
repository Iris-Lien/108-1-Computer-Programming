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
  /*
  printf("%d",prime(2));
  printf("%d",prime(3));
  printf("%d",prime(4));
  printf("%d",prime(5));
  printf("%d",prime(6));
  */
  int L,M;

  while(scanf("%d%d",&L,&M) != EOF)
  {
      if(L==0&&M==0){break;}
      else
      {
          int array[M-L];
          int count =0;
          for(int i=L;i<=M;i++)
          {

              if(prime(i)==1)
              {
                  array[count] =i;
                  count+=1;
              }
          }
          if(count==0)
          {
              printf("NONE\n");
          }
          else if(count==1)
          {
              printf("%d %d\n",array[0],array[0]);
          }
          else{printf("%d %d\n",array[0],array[count-1]);}
      }
  }

}
