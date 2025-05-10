#include <stdio.h>

int main() {
    int bottles, exchangeable;
    while (scanf("%d", &bottles) && bottles != 0) {
        int totalDrinks = 0;
        while (bottles >= 3) {
            exchangeable = bottles / 3;
            totalDrinks = totalDrinks + exchangeable;
            bottles = exchangeable + bottles % 3;
        }
        if (bottles == 2)
            totalDrinks++;
        printf("%d\n", totalDrinks);
    }
    return 0;
}
