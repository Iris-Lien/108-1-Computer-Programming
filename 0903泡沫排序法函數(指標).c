int bubbleSort(DATA *array, int n)
{
  // 請依題目要求完成該函數
  int count=0,i,j;
  DATA temp;
  for(i=0;i<n-1;i++)
        for(j=0;j<n-1;j++)
        {
            if(less(array[j], array[j+1]))
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                count++;
            }
        }
    return count;
}
