int maxElementIndex(int *array, int n)
{
  //�Ш̷��D�ػ��������o�Ө��
  int max=0;
  int i;
  for(i=0;i<n;i++)
  {
  	if(array[i]>=array[max])
    {max=i;}
  }
  return max;
}
