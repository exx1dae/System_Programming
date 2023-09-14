#include <stdio.h>

int main() {
    int a, b;
    printf("Введите два числа: ");
    scanf("%d %d", &a, &b);

    int result = 0;

    for (int i = 0; i < b; i++) {
        result += a;
    }

    printf("Результат умножения: %d\n", result);

    return 0;
}
