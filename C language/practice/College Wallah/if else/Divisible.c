#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x :");
    scanf("%d",&x);

    if(x%3==0 && x%5==0){
        printf("The number is divisible by 5 and 3");
    }
    else{
        printf("The number is not divisible by 5 and 3");
    }

    return 0;
}