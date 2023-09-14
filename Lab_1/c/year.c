#include <stdio.h>

int main() {
    int year;
    printf("Введите год: ");
    scanf("%d", &year);

    if (year >= 0) {
        if (year % 100 == 11 || year % 100 == 12 || year % 100 == 13 || year % 10 == 0 || (year % 10 >= 5 && year % 10 <= 9)) {
            printf("%d лет\n", year);
        } else if (year % 10 == 1) {
            printf("%d год\n", year);
        } else {
            printf("%d года\n", year);
        }
    } else {
        printf("Введён некорректный год\n");
    }

    return 0;
}
