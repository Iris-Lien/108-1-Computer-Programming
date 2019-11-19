#include <stdio.h>

int main()
{
  int cost;

  while (scanf("%d", &cost) != EOF)
  {
    if (cost <= 110)
      cost = 2 * cost;
    else if (cost <= 330)
      cost = 2 * 110 + 3 * (cost - 110);
    else if (cost <= 500)
      cost = 2 * 110 + 3 * 220 +
             4 * (cost - 330);
    else
      cost = 2 * 110 + 3 * 220 +
             4 * 170 + 5 * (cost - 500);

    printf("%d\n", cost);
  }

  return 0;
}
      
