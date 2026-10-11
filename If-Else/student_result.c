#include<stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, total;
    float per;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    per = total / 5.0;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f\n", per);

    if(per >= 60)
        printf("First Division");
    else if(per >= 45)
        printf("Second Division");
    else if(per >= 33)
        printf("Third Division");
    else
        printf("Fail");

    return 0;
}

Output:
Enter marks of five subjects: 80 70 65 75 60
Total Marks = 350
Percentage = 70.00%
First Division
