#include <stdio.h>
#include <stdlib.h>

main()
{
		char input[1000], input_rep[1000];
		char tar[1000], rep[1000];
		int i, j, k;
		i = j = k =0;
		do
		{
			scanf("%c", &(input[i]));
			i++;
		}while(input[i-1] != '.');

		input[i] = '\0';

		scanf("%s%s", tar, rep);

		for(i = 0 ; input[i] != '\0' ; i++)
		{
			for(j = 0 ; tar[j] == input[i+j] && tar[j] != '\0'; j++);

			if(tar[j] == '\0')
			{
				i += j - 1;
				for(j = 0 ; rep[j] != '\0' ; j++)
				{
					input_rep[k] = rep[j];
					k++;
				}
			}
			else
			{
				input_rep[k] = input[i];
				k++;
			}

		}

	input_rep[k] = '\0';

	printf("%s", input_rep);

	return 0;
}
