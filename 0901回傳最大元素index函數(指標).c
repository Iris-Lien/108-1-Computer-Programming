int maxElementIndex(int *array, int n)
{
  //請依照題目說明完成這個函數
  int max=0;
  int i;
  for(i=0;i<n;i++)
  {
  	if(array[i]>=array[max])
    {max=i;}
  }
  return max;
}
