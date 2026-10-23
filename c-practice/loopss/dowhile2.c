#include<stdio.h>
int main(){
int x = 10;

while (x < 5) {        
    printf("while\n");
}

do {
    printf("do-while\n");   
} while (x < 5);
return 0;}