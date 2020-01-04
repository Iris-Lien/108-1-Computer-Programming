/*
遇到字母 a 時，必須將其後的所有的字母順序反轉
遇到字母 b 時，則須將其後所有字母複製一遍接在原字串後面
遇到字母 c 時，要將其後的兩個字母從字串中刪除
遇到其他字母則不做任何處理
input ex:               output ex:
5                       
about                   atuob
peter                   peter
fractional              fralacon
acebf                   afbec
aliceisnotaboy          ayobalicsnotatonsiec
*/

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
