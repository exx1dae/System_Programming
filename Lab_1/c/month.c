#include <stdio.h>

int main() {
    int month;
    printf("Введите номер месяца: ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12) {
        if (month >= 3 && month <= 5) {
            printf("Весна\n");
        } else if (month >= 6 && month <= 8) {
            printf("Лето\n");
        } else if (month >= 9 && month <= 11) {
            printf("Осень\n");
        } else {
            printf("Зима\n");
        }
    } else {
        printf("Некорректный номер месяца\n");
    }

    return 0;
}
