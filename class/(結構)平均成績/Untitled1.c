#include<stdio.h>

struct student
{
    int grade[20];
    int count;
};
float average_grade(struct student *std_ptf)
{
    int i;
    float output=0;
    for (i = 0; i < std_ptf->count; i++)
        output += std_ptf->grade[i];
    return output / std_ptf->count;
}
main()
{
    int i;
    struct student Student;
    scanf("%d", &(Student.count));
    for (i = 0; i < Student.count; i++)
    {
        scanf("%d", &(Student.grade[i]));
    }
    printf("%.6f", average_grade(&Student));
    return 0;
}
