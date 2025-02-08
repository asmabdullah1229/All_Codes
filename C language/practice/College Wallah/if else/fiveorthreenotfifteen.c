#include<stdio.h>
int main()
{
    int m;
    printf("Enter the number :");
    scanf("%d",&m);

    if(m%5==0 || m%3==0){
        if(m%15!=0)
        {
            printf("The number is divisible by 5 and 3 but not 15 ");
        }
        else{
            printf("The number is divisible by 15");
        }

    }
    else{
        printf("The number is not divisible by 5 and 3");
    }
    return 0;
}