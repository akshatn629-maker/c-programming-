#include <stdio.h>
int main (){
    float p,r,t,si,amt;

    printf("enter the valuse of P:");scanf("%f",&p);
     printf("enter the valuse of R:");scanf("%f",&r);
      printf("enter the valuse of T:");scanf("%f",&t);

      si=(p*r*t)/100;
     amt=p+si;
     printf("the simple intrest is : %.2f\n\n",si);
     printf("the amount is : %.2f",amt);
     return 0;
}