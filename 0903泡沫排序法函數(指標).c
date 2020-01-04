int bubbleSort(DATA *array, int n)
{
  // 請依題目要求完成該函數
  int count=0,i,j;
  DATA temp;
  for(i=0;i<n-1;i++)  //外迴圈為排序趟數ex:n個數字進行n-1趟
        for(j=0;j<n-1;j++)   //內迴圈為每趟比較次數,第i趟比較n-i次
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
