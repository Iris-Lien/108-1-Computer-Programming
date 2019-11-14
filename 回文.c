#include <stdio.h>
#include <stdlib.h>


int main()
{
    char str[100], copy[100];
    int i, sum_i, j, cond = 0;
    scanf("%s", &str);
    for(i = 0 ; str[i] != '\0' ; i++); // 計算字串長度
    sum_i = i; //把字串長度存起來
    for(i = 0 ; str[i] != '\0' ; i++) //複製陣列
    {
        if('A' <= str[i] && str[i] <= 'Z') //大寫轉小寫
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
            cond = 1; //如果不是回文就更改條件值,結束迴圈
            break;
        }
    }
    if(cond == 0)
        printf("%s is a palindrome.", str);
    else
        printf("%s is not a palindrome.", str);

    return 0;
}
