#include <stdio.h>
#include <stdlib.h>


int main()
{
    char str[100], copy[100];
    int i, sum_i, j, cond = 0;
    scanf("%s", &str);
    for(i = 0 ; str[i] != '\0' ; i++); // �p��r�����
    sum_i = i; //��r����צs�_��
    for(i = 0 ; str[i] != '\0' ; i++) //�ƻs�}�C
    {
        if('A' <= str[i] && str[i] <= 'Z') //�j�g��p�g
            copy[i] = str[i] + ('a' - 'A');
        else
            copy[i] = str[i];
    }
    for(j = 0 ; j < i ; j++)
    {
        if(copy[j] == copy[sum_i - j - 1])
            continue;
        else
        {
            cond = 1; //�p�G���O�^��N�������,�����j��
            break;
        }
    }
    if(cond == 0)
        printf("%s is a palindrome.", str);
    else
        printf("%s is not a palindrome.", str);

    return 0;
}
