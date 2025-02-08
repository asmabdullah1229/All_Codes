// Multiplication table of a number
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number :");
    scanf("%d",&n);

    printf("Table of %d:\n",n); 

    for(int i = 1; i<=10; i = i + 1)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}