#include<stdio.h>
int main()
{
    int a;
    printf("Enter first number :");
    scanf("%d",&a);

    int b;
    printf("Enter second number :");
    scanf("%d",&b);

    int c;
    printf("Enter third number :");
    scanf("%d",&c);

    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is invalid");
    }


    return 0;
}