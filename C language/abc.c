// larger among three numbers
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter first number :");
    scanf("%d",&a);

    printf("Enter second number :");
    scanf("%d",&b);

    printf("Enter third number :");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("a is largest");
    }
    if(b>a && b>c)
    {
        printf("b is largest");
    }
    if(c>a && c>b)
    {
        printf("c is largest");
    }

       return 0;
}