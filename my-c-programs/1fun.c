#include<stdio.h>
int sum(){
    int a,b,sum;
    printf("enter the two no. you want to add:");
    scanf("%d %d",&a, &b);
    sum=a+b;
    printf("sum=%d\n", sum);
    return a+b;
    }
    int main(){
        sum();
        sum();
        sum();
        sum();
       
        return 0;
}