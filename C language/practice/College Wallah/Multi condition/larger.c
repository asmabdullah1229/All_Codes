#include<stdio.h>
int main()
    int a;
    int b;
    int c;

    printf("Enter the value of a :");
    scanf("&d", &a);

    printf("Enter the value of b :");
    scanf("&d", &b);

     printf("Enter the value of c :");
     scanf("&d", &c);

    if (a > b && a > c)
    {
    if(c>a && c>b)
    {
        printf("%d is largest among three numbers",c);
    }

    return 0;
}