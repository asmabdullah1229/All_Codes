// Greatest among three numbers
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the value of a :");
    scanf("%d",&a);

    printf("Enter the value of b :");
    scanf("%d",&b);

    printf("Enter the value of c :");
    scanf("%d",&c);

    if(a>b)// b is out of race
    {
        if(a>c)
        printf("%d is greatest among three numbers",a);

    else
    
        printf("%d is greatest",c);

    }

    return 0;
}