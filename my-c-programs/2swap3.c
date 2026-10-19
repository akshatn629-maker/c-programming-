#include <stdio.h>
int main(){
    int a,b,c;
printf("enter the 3 no.\n");
printf("enter a:"); scanf("%d", &a);
printf("enter b:"); scanf("%d", &b);
printf("enter c:"); scanf("%d", &c);

a=a+b+c;

b=a-(b+c);
c=a-(b+c);
a=a-(b+c);
printf("after swap a is %d\n\n", a);
printf("after swap b is %d\n\n", b);
printf("after swap c is %d\n\n", c);
return 0;
}