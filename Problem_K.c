#include <stdio.h>
#include <math.h>

int main() {
    int T, i, j;
    double pi = acos(-1.0), radius, red, green,total;

    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%d", &j);
        radius = j / 5.0;
        red = pi * radius * radius;
        total = j* (j * 0.6);
        green = total - red;
        printf("%.2f %.2f\n", red,green);
    }
    return 0;
}
