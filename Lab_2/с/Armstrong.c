#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool armstrong(int num);

int main() {
    for (int i = 100; i <= 9999; i++) {
        if (armstrong(i)) {
            printf("%d число Армстронга\n", i);
        }
    }

    return 0;
}

bool armstrong(int num) {
    char numAsString[10]; // представление числа в виде строки (пусть будет до 10 цифр)
    sprintf(numAsString, "%d", num); // преобразуем число в строку (%d - digit)

    int len = 0;
    while (numAsString[len] != '\0') { // в с строки заканчиваются нулевым символом
        len++; // получаем длину числа
    }

    int sum = 0;

    for (int i = 0; i < len; i++) {
        int numericValue = numAsString[i] - '0'; // приводим char к типу int ('9' - '0' == 9)
        sum += pow(numericValue, len);
    }

    return sum == num;
}
