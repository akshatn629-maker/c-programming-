#include <stdio.h>
int main (){
    int a,s,b,p,d,rem,remm,o,m,rev;
    printf("etner any three digit no.:");
    scanf("%d",&a);
    p=a/100;
    d=a%100;
     s=d/10;
     b=d%10;
     rem=(b*10)+s;
     //o=rem/100;
     //m=rem%100;
     //remm=(m*100)+o;
     rev=p+(rem*10);

     printf("the rev of the given no. is %d", rev);
     return 0;
}