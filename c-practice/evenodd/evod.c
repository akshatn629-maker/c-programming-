#include <stdio.h>
int main (){
    int a,even;
    printf("enter the no. of your choice:");
    scanf("%d",&a);
    even= ((a%2==0)? printf("even"):printf("odd"));
    return 0;
}