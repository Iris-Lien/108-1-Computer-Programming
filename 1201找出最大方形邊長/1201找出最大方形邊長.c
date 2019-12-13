#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,M,N,Q;
    int r,c;
    int i,j,k,l;
    int flag=0,round;
    char array[100][100];

    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%d%d%d",&M,&N,&Q);
        printf("%d %d %d\n",M,N,Q);
        for(j=0; j<M; j++)
        {
            for(k=0; k<N; k++)
            {
                scanf(" %c",&(array[j][k]));
            }
        }
        for(l=0; l<Q; l++)
        {
            scanf("%d%d",&r,&c);
            for(round=1; flag==0&&r+round<M&&c+round<N&&r-round>=0&&c-round>=0; round++) //
            {
                for(j=r-round; j<r+round; j++)
                {
                    for(k=c-round; k<c+round; k++)
                    {
                        if(array[r][c]!=array[j][k])
                        {
                            flag=1;
                        }
                    }
                }
            }
            if(flag==1)
            {
                printf("%d\n", (round-1) * 2 - 1);
            }
            else
            {
                printf("%d\n", round * 2 - 1);
            }
            flag=0;
        }

    }

    return 0;
}
