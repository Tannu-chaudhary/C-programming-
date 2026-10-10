#include<stdio.h>
int main()
{
    int m1, m2, m3, total;
    float per;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    per = total / 3.0;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f\n", per);

    if(m1 >= 33 && m2 >= 33 && m3 >= 33)
        printf("Result: Pass");
    else
        printf("Result: Fail");

    return 0;
}


Output:
Enter marks of three subjects: 75 80 65
Total Marks = 220
Percentage = 73.33
Result: Pass