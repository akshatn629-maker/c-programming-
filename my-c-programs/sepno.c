#include<stdio.h>
int main (){
    int a,num,b,new,c;
    
    printf("enter a 3 digit no,:");
    scanf("%d", &a);

    num=a/100;
    printf("hundredth term:%d",num);
    
    
    new=a%100;
    c=new/10;
    printf("\ntens place is:%d",c);
    b=new%10;
    printf("\nones place is:%d",b);
    return 0;
}