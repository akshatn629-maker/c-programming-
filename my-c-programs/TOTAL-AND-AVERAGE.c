#include <stdio.h>

int main() {
    int a, b, c, d, e, sum;
    float average;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    sum = a + b + c + d + e;
    average = sum / 5.0;

    printf("Sum is %d\n", sum);
    printf("Average is %f\n", average);

    return 0;
}

