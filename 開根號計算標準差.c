#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void func_sqrt(double n)
{
    double a=0,b,x;//�w�q��//n=�ϥΪ̿�J���ƭ�//a=�U���//b=�W���//x=�G���

    for(int i=0;i<100;i++)//�Q�ΰj�����G��
    {
        x=((a+b)/2);//�M��W�U��ɪ�������
        if((x*x)>n)//�p�GX^2�j��N^2�h
        {
            b=x;//�W��ɲ��ʨ줤����
        }else if((x*x)<n){//�p�GX^2�p��N^2�h
            a=x;//�U��ɲ��ʨ줤����
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
