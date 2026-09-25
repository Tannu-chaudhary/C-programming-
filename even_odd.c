#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("even number=%d",n);
    }
    else
    {
        printf("odd");
    }
    return 0;
}