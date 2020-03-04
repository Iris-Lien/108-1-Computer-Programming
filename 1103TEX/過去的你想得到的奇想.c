/*
input ex:
"To be or not to be," quoth the Bard, "that
is the question".
The programming contestant replied: "I must disagree.
To `C' or not to `C', that is The Question!"

output ex:
``To be or not to be,'' quoth the Bard, ``that
is the question''.
The programming contestant replied: ``I must disagree.
To `C' or not to `C', that is The Question!''
*/

#include <stdio.h>

int main()
{
    char input;
    int counter = 0;
    while(scanf("%c", &input)!= EOF)
    {
        if (input == '"')
        {
            switch (counter % 2)
            {
                case 0:
                    printf("``");
                    break;
                case 1:
                    printf("''");
                    break;
            }
            counter++;
        }
        else
            printf("%c", input);
    }
    return 0;
}
