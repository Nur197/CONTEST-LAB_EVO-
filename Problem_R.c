#include <stdio.h>

int main() {
    int n, a, b, c, i;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b > c && b + c > a && c + a > b) {
            if (a == b && b == c) {
                printf("Case %d: Equilateral\n", i);
            } else if (a == b || b == c || c == a) {
                printf("Case %d: Isosceles\n", i);
            } else {
                printf("Case %d: Scalene\n", i);
            }
        } else {
            printf("Case %d: Invalid\n", i);
        }
    }

    return 0;
}
