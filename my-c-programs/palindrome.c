#include<stdio.h>
int main(){
    int n,i,rev=0,rem,tem;
    printf("enter any no.");
    scanf("%d", &n);
    tem=n;
    for(i=n;i>0;i=i/10)
    {rem=i%10; rev=rev*10+rem;}
    if(tem==rev){printf("paildrome");}
    else {printf("not a paildrome");
    }
return 0;
}