/*
input ex:
3
This is a test.
Count me 1 2 3 4 5.
Wow!!!! Is this question easy?

output ex:
S 7
T 6
I 5
E 4
O 3
A 2
H 2
N 2
U 2
W 2
C 1
M 1
Q 1
Y 1
*/
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
                    input[i]=input[i]-32;   //小寫轉大寫
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
