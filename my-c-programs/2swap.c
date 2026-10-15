#include <stdio.h>
int main(){
  int a,b,c;
printf("enter the 2 no.:\n");
scanf("%d%d", &a,&b);
c=a;
a=b;
b=c;
printf("after swap a=%d",a);
printf("after swap b=%d",b);
return 0;
}
