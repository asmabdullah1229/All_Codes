#include<stdio.h>
int main()
{
    int a;
    int s;
    int m;
    printf("Enter the age of Asif :");
    scanf("%d",&a);
    printf("Enter the age of Surjo :");
    scanf("%d",&s);
    printf("Enter the age of Moinul :");
    scanf("%d",&m);

    if(a<s){
        if(a<m){
            printf("Asif is youngest");
        }
        if(s<m && s>a){
            printf("Asif is youngest");
        }
        else("surjo is youngest");
    }
    else{
        printf("Moinul is youngest");
    }


    return 0;
}