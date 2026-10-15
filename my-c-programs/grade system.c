#include <stdio.h>
int main (){
    float percentage;
    printf("enter the percentage:\n");

    scanf("%f", &percentage);
    (percentage>=40)?printf("pass"):printf("fail");
    return 0;

}