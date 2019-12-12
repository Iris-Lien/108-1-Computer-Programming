#include<stdio.h>
#include<stdlib.h>

main()
{
    int n;
    int mask1,mask2,mask3,mask4;
    int goal1,goal2,goal3,goal4;
    int IP1,IP2,IP3,IP4;
    int i,j;
    int array1[4],array2[4];
    int count=0;

    scanf("%d",&n);
    scanf("%d%d%d%d",&mask1,&mask2,&mask3,&mask4);
    scanf("%d%d%d%d",&goal1,&goal2,&goal3,&goal4);

    array1[0]=(mask1&goal1);
    array1[1]=(mask2&goal2);
    array1[2]=(mask3&goal3);
    array1[3]=(mask4&goal4);

    for(i=0;i<n;i++)
    {
        scanf("%d%d%d%d",&IP1,&IP2,&IP3,&IP4);
        array2[0]=(mask1&IP1);
        array2[1]=(mask2&IP2);
        array2[2]=(mask3&IP3);
        array2[3]=(mask4&IP4);

        for(j=0;j < 4 && array1[j]==array2[j];j++);

        if (j == 4)
            count++;
    }
    printf("%d",count);




    return 0;
}
