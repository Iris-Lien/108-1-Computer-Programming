#include <stdio.h>

int main()
{
  int nums1[21], nums2[21];
  int i, j;
  int temp;

  while (scanf("%d", &(nums1[0])) != EOF)
  {
    for (i = 1; i <= nums1[0]; i++)
      scanf("%d", &(nums1[i]));

    scanf("%d", &(nums2[0]));
    for (i = 1; i <= nums2[0]; i++)
      scanf("%d", &(nums2[i]));

    if (nums1[0] != nums2[0])
    {
      printf(
             "%d\n",
             nums1[0] == nums2[0]
            );
      continue;
    }

    for (i = nums1[0]; 1 < i; i--)
      for (j = 1; j < i; j++)
      {
        if (nums1[j + 1] < nums1[j])
          temp = nums1[j],
          nums1[j] = nums1[j + 1],
          nums1[j + 1] = temp;

        if (nums2[j + 1] < nums2[j])
          temp = nums2[j],
          nums2[j] = nums2[j + 1],
          nums2[j + 1] = temp;
      }

    for (
         i = 1;
         i < nums1[0] &&
             nums1[i] == nums2[i];
         i++
        );

    printf("%d\n", nums1[i] == nums2[i]);
  }

  return 0;
}
