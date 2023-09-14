#include <stdio.h>

int main() {
    int num;
    printf("Введите трёхзначное число: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999) {
        printf("Введено корректное трёхзначное число\n");
    } else {
        printf("Введено некорректное число\n");
    }

    return 0;
}
