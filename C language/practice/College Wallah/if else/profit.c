#include<stdio.h>
int main()
{
    int c,s;
    printf("Enter cost price :");
    scanf("%d",&c);

    printf("Enter selling price :");
    scanf("%d",&s);

    if(c>s){
        printf("Loss");
    }
    if(c<s){
        printf("Profit");
    }
    if(c==s){
        printf("No profit,no loss");
    }

    return 0;
}
