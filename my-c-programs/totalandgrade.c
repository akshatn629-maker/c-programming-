#include <stdio.h>
int main (){
    int a,b,c,d,e,total;
    float percentage;
    printf("enter the marks of 5 sub:\n");
    scanf("%d%d%d%d%d", &a, &b,&c,&d,&e);
    total=a+b+c+d+e;
    percentage= total/5.0;
    printf("total=%d\n", total);
    printf("percentage=%.2f%",percentage
    );
    printf("enter the percentage:\n");

    scanf("%f", &percentage);
    (percentage>=40)?printf("pass"):printf("fail");
        return 0;}
        