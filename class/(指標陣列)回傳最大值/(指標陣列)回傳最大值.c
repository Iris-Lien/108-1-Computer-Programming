#include <stdio.h>

int max(int *iptr[], int n)
{
    int max=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(*iptr[i]>=*iptr[max])
        {max=i;}
    }
    return *iptr[max];
}



int main(void)

{
    int i;
    int array[10];
    int *iptr[10];
    for (i=0; i<10; i++)
    {
        scanf("%d",&array[i]);
        iptr[i] = &array[i];
        //printf("%d",array[i]);
    }
    //iptr[i] = &array[i];

    printf("%d",max(iptr,i));
    return 0;
}

