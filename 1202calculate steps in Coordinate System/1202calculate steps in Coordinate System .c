#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x1,x2,y1,y2;
    int i;
    int step=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        while(x1!=x2||y1!=y2)
        {
            if(y1==0)
            {
                y1=x1+1;
                x1=0;
                step++;
            }
            else if(x1==0&&y1==0)
            {
                y1+=1;
                step++;
            }
            else
            {
                x1+=1;
                y1-=1;
                step++;
            }
        }
        printf("Case %d: %d\n",i+1,step);
        step=0;
    }

    return 0;
}
