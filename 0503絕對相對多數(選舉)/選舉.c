
int main()
{
    int n, m;
    scanf("%d%d", &n , &m);
    while(n != 0 && m != 0)
    {
		int array[2001];
        int vote;
        int i;
        int record =0;
        int max =0;
        for(i = 0; i < n; i++)
        {
            array[i] = 0; //��}�C�k�s
        }
        for(i = 0 ; i < m ; i++)
        {
            scanf("%d", &vote);
            array[vote - 1]++;
        }

        for(i = 0 ; i < n ; i++)//Find Max
        {
            if(array[i] > max)
            {
                max = array[i];
                record = i;
            }
        }

        if(max > (m / 2)){printf("Majoritarian winner %d\n", record+1);}
        else
        {
            int count=0;
            for(int i=0;i<n;i++)
            {
                if(array[i]==max){count+=1;}
            }
            if(count>=2){printf("No winner\n");}
            else{printf("Plurality winner %d\n",record+1);}
        }

        scanf("%d%d", &n, &m);
    }


    return 0;
}
