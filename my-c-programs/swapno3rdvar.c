#include <stdio.h>
int main(){
    int a,b;
    printf("enter the a amf b:\n");
    scanf("%d%d", &a, &b);
    a=a+b;
    b=a-(b);
    a=a-(b);
    printf("after swap a is %d",a
    );
    printf("after swap b is %d",b);
    return 0;
}
