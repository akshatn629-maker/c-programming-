#include<stdio.h>
int main(){
    int amt,five,fit,two,twe,fiv,one,ten, hun;
    printf("enter the amount of money you have: ");
    scanf("%d",&amt);

five=amt/500;
printf("\nthe no. of 500 notes is:%d\n",five);
two=(amt%500)/200;

printf("the no. of 200 notes is:%d\n",two);

hun=((amt%500)%200)/100;
printf("the no. of 1oo notes is:%d\n",hun);

fit=(((amt%500)%200)%100)/50;
printf("the no. of 50 notes is:%d\n",fit);

twe=((((amt%500)%200)%100)%50)/20;
printf("the no. of 20 notes is:%d\n",twe);

ten=(((((amt%500)%200)%100)%50)%20)/10;
printf("the no. of 10 notes is:%d\n",ten);


fiv=((((((amt%500)%200)%100)%50)%20)%10)/5;
printf("the no. of 5 notes is:%d\n",fiv);

one=(((((((amt%500)%200)%100)%50)%20)%10)%5)/1;
printf("the no. of 1 coine is:%d\n",one);

return 0;
}