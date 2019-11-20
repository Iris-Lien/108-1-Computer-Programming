void orderByValue(int *a, int *b, int *c) {
  // 請依題目敘述完成這個函數
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
