// Prime number 13/01/25
#include<stdio.h>
int main()

{
    int i,n,j;
    printf("Enter a number n :");
    scanf("%d",&n);

    for(int i = 2; i<n; i++)
    {
        if(n%i==0)
        
            j=0;
        
    }

    if(j==1)
    {
        printf("The given number is  prime");
    }

    else
    {
        printf("The given number is not  prime");
    }


    return 0;
}