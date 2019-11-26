#include<stdio.h>
#include<stdlib.h>

main()
{
    int n;
    int i,j,temp;
    int sum[26]= {0};
    char input[1000];
    int max=0;
    scanf("%d\n",&n);
    for(j=0; j<n; j++)
    {
        //scanf("%s",&input);
        //printf("%s\n",input);
        gets(input);
        for(i=0; input[i]!='\0'; i++)
        {
            if(isalpha(input[i]))
            {
                if(islower(input[i]))
                {
                    input[i]=input[i]-32;//¤p¼gÂà¤j¼g
                    sum[input[i]-65]++;
                }
                else
                    sum[input[i]-65]++;
            }
        }
    }
    for(i=0; i<26; i++)
    {
        if(sum[i]>max)
        {
            max=sum[i];
        }
    }
    for(j=max; j>0; j--)
    {
        for(i=0; i<26; i++)
        {
            if(sum[i]==j)
            {
                printf("%c %d\n",i+65,sum[i]);
            }
        }
    }
    return 0;
}
