#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
    int n;
    int a,i,j;
    int len;
    char input[1000],temp[1000];
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%s",&input);
        len=strlen(input);
        for(i=0;i<len;i++)
        {
            if(input[i]=='a')
            {
                for(j=0;j<len-(i+1);j++)
                    temp[j]=input[(len-1)-j];
                for(j=0;j<len-(i+1);j++)
                    input[(i+1)+j]=temp[j];
            }
            else if(input[i]=='b')
            {
                for(j=0;j<len-(i+1);j++)
                    input[j+len]=input[j+(i+1)];
                len+=j;
                input[len]='\0';
            }//zxcvbnmjkl
            else if(input[i]=='c')
            {
                if(i>=len-3)
                {
                    input[i+1]='\0';
                    len=i+1;
                }
                else
                {
                    for(j=i+1;j<len;j++)
                        input[j]=input[j+2];
                    len-=2;
                    input[len]='\0';
                }
            }
        }
        printf("%s\n",input);
    }
    return 0;
}
