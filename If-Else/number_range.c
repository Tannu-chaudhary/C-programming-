#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number");
    scanf("%d", &n);

    if(n >= 1 && n <= 25)
        printf("Range 1 to 25");
    else if(n >= 26 && n <= 50)
        printf("Range 26 to 50");
    else if(n >= 51 && n <= 75)
        printf("Range 51 to 75");
    else if(n >= 76 && n <= 100)
        printf("Range 76 to 100");
    else
        printf("Out of Range");

    return 0;
}
