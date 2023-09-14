#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isAutomorphic(int num);

int main() {
    int n;

    printf("Введите число n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        if (isAutomorphic(i)) {
            printf("%d|%d\n", i, i * i);
        }
    }

    return 0;
}

bool isAutomorphic(int num) {
    int square = num * num;

    while (num > 0) {
        if (num % 10 != square % 10) {
            return false;
        }
        num /= 10;
        square /= 10;
    }

    return true;
}
