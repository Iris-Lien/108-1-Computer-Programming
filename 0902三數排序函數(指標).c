void orderByValue(int *a, int *b, int *c) {
  // �Ш��D�رԭz�����o�Ө��
 	int temp;
  	if (*a < *b)
    {
        temp = *b;
        *b = *a;
        *a = temp;
    }
    if(*b < *c)
    {
        temp = *c;
        *c = *b;
        *b = temp;
    }
   if (*a < *b)
    {
        temp = *b;
        *b = *a;
        *a = temp;
    }
}
