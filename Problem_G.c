#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    while (1) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) {
            break;
        }
        int start = (int) sqrt(a);
        if (start * start < a)
            start++;
        int end = (int) sqrt(b);
        if (start > end) {
            printf("0\n");
        } else {
            printf("%d\n", end - start + 1);
        }
    }

    return 0;
}
