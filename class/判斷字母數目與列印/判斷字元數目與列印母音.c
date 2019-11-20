#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ( void )
{
    char input[100];
    char string[100];//ダ
    int number=0,alpha=0;//璸计Ω计,ダΩ计
    int i;
    int a=0,b=0;//璸ダΩ计Ω计

    scanf("%s",input);
    printf ("%s\n",input);
    for(i=0;input[i]!='#'&&input[i]!='\0';i++)
    {
        printf("%c",input[i]);
        printf("\n");
        if(isdigit(input[i]))
            {number++;}
        if(isalpha(input[i]))
        {
            alpha++;
            if(input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u'
               ||input[i]=='A'||input[i]=='E'||input[i]=='I'||input[i]=='O'||input[i]=='U')
            {
                a++;

            }
            else
                {b++;}
        }
    }
    printf("%d\n%d\n%d\n%d\n",number,alpha,a,b);

}
