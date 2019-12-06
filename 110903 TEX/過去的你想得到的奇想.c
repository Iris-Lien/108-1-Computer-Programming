#include <stdio.h>

int main()
{
    char input, cond;
    int counter = 0;

    for (
        cond  = scanf("%c", &input);
        cond != EOF;
        cond  = scanf("%c", &input)
    )
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
