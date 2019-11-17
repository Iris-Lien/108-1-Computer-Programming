#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void func_sqrt(double n)
{
    double a=0,b,x;//定義區//n=使用者輸入的數值//a=下邊界//b=上邊界//x=逼近值

    for(int i=0;i<100;i++)//利用迴圈執行逼近
    {
        x=((a+b)/2);//尋找上下邊界的中間值
        if((x*x)>n)//如果X^2大於N^2則
        {
            b=x;//上邊界移動到中間值
        }else if((x*x)<n){//如果X^2小於N^2則
            a=x;//下邊界移動到中間值
        }
    }

    printf("%.4f",x);

}

int main()
{
    int  N , i = 0, j, sum = 0; // int array[],  sum = 0;
    float average, sum_a = 0, a, SD, b;
    int temp;
    scanf("%d", &N);
    int array[N];
    // for (i = 0; ; i++) scanf("%d", array[i]); sum += array[i];
    while(i < N)
    {
        scanf("%d", &array[i]);
        sum += array[i];
        i++;
    }
    average = sum / (N*1.0);

    for(i = 0; i < N; i++)
    {
        a = ((array[i] - average) * (array[i] - average));
        sum_a += a;
    }
    b = sum_a / N;

    SD = sqrt(b);

    printf("%.4f\n", SD);


    func_sqrt(4);

    return 0;
}
