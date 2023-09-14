#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введите длины сторон треугольника: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Треугольник существует\n");
    } else {
        printf("Треугольник не существует\n");
    }

    return 0;
}
