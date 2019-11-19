#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array_a[10];
    int sum=0;
    int i;
    for(i = 0 ; i < 10 ; i++)
        scanf("%d", &(array_a[i]));

    for(i = 0 ; i < 10 ; i++)
        sum += array_a[i];

    printf("%d\n", sum);
    printf("%d", array_a[9]);
    for(i = 8 ; i >= 0 ; i--)
        printf(" %d", array_a[i]);
    return 0;
}
