#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter the value of length:");
    scanf("%d",&l);

    printf("Enter the value of breadth:");
    scanf("%d",&b);

    int area = l*b;
    int perimeter = 2 * (l + b) ;

    if(area>perimeter)
    {
        printf("Area is greater than perimeter");
    }
    else{
        printf("Perimeter is greater than area");
    }

     return 0;
}
