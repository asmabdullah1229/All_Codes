#include<stdio.h>
int main(){
int sum_Even = 0, sum_odd = 0;
for(int i = 2; i<101; i++)
{
    if (i%2 = 0)
    {
        sum_Even += i;
    }
    else{
        sum_odd += i;
    }  

}
 printf("sum of even number is %d",sum_Even);
 printf("sum of odd number is %d",sum_odd);
 
 return 0;
}