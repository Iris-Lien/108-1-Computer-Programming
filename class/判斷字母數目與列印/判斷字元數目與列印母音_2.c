#include <stdio.h>

int main()
{
  char input;                           // 讀入字元
  char vowel[5] =
           {'a', 'e', 'i', 'o', 'u'};   // 母音
  char string[100];                     // 記錄字串的母音
  int count[3] = {0};                   // 記錄數字數量、字母數量與母音數量
  int i;                                // 迴圈遞迴元

  scanf("%c", &input);                  // 輸入字元
  while (input != '#')                  // 直到讀取「#」
  {
    if (input == ' ');                  // 讀取「空格」時，不執行任何指令
    else if (  '0' <= input &&
             input <= '9')              // 讀取「數字」時
      count[0]++;                       // 計次
    else                                // 讀取「字母」時
    {
      count[1]++;                       // 計次

      if ('A' <= input && input <= 'Z') // 轉換小寫字母
        input += 'a' - 'A';             // （同上）

      for (i = 0;                       // 若是字母為「母音」
           i < 5 && input != vowel[i];  // 則程式會在 i 變成 5 以前離開迴圈
           i++);                        // 若是 i 成功變成 5
      if (i != 5)                       // 則表示該字母不是母音
      {
        string[count[2]] = input;       // 記錄母音
        count[2]++;                     // 計次
      }
    }

    scanf("%c", &input);                // 輸入字元
  }

  for (i = 0; i < 3; i++)               // 印出數字數量、字母數量和母音數量
    printf("%d\n", count[i]);           // 印出子音數量
  printf("%d\n", count[1] - count[2]);  // （字母數量 － 母音數量）

  for (i = 0; i < count[2]; i++)        // 印出字串所有的母音
    printf("%c", string[i]);            // （同上）

  return 0;
}
