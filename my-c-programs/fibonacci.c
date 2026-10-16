#include <stdio.h>
int main() {
    int num, n = 0, m = 1, nxt;
    printf("Enter how many terms: ");
    scanf("%d", &num);
    printf("%d %d ", n, m);
    for (int i = 2; i < num; i++) {
        nxt = n + m;
        printf("%d ", nxt);
        n = m;
        m = nxt;
    }
    printf("\n");
    return 0;
}