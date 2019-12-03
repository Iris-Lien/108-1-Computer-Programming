#include <stdio.h>
#include <stdlib.h>

main()
{
    char input[1000];
    int i;
    int count=0;

    gets(input);
    //printf("%s\n",input);

    for(i=0;input[i]!='\0';i++)
    {
        if(input[i]=='\"')
        {
            count++;
            if(count==1)
            {
                input[i]='\`';
            }
            else if(count==2)
            {
                input[i]='\'';
                count=0;
            }
        }
        printf("%c",input[i]);
    }
    return 0;
}
