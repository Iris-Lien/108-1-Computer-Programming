#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int palindrome(int left,int right,char *string)
{
    if(left>=right)
        return 1;
    if(string[left]!=string[right])
        return 0;
        return palindrome(left+1,right-1,string);
}
main()
{
    char input[100];
    int i;
    scanf("%s",&input);
    printf("%s",input);
    for(i=0;i<strlen(input);i++)
    {
        if('A'<=input[i]&&input[i]<='Z')//¤j¼gÂà¤p¼g
            input[i]=input[i]+('a'-'A');
    }
    if(palindrome(0,strlen(input)-1,input)==1)
        printf(" is a palindrome.");
    else
        printf(" is not a palindrome.");
    return 0;
}
