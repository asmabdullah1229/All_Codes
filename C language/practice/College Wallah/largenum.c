#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter three numbers :");
    scanf("%d%d%d",&a &b &c);

    if(a>b && a>c){
        printf("a is largest among three numbers");
    }
    if(b>a && b>c){
        printf("b is largest among three numbers");
    }
    else
    {
        printf("c is largest among three numbers");
    }

    return 0;
}