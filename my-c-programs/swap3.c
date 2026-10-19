#include <stdio.h>
int main (){
    int a,b,c,tem;
    printf("enter the three no.\n");
printf("enter a:");
scanf("%d", &a);
printf("enter b:");
scanf("%d",&b);
printf("enter c:");
scanf("%d",&c);
tem=a;
a=b;
b=c;
c=tem;

printf("after swap a:%d",a);
printf("after swap b:%d",b);
printf("after swap c:%d",c);
    
return 0;
}