#include <stdio.h>
int main (){
    int a,s,b,rev;
    printf("etner any two digit no.:");
    scanf("%d",&a);
     s=a/10;
     b=a%10;
     rev=(b*10)+s;
     printf("the rev of the given no. is %d", rev);
     return 0;
}