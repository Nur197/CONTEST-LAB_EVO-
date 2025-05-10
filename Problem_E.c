#include <stdio.h>

int main() {
    int n,p;
    while (scanf("%d", &n) == 1) {
        if (n < 0) {
            break;
        }
        p = (n * (n + 1)) / 2 + 1;
        printf("%d\n",p);
    }

    return 0;
}
