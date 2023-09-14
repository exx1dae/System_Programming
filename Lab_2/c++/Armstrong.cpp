#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool armstrong(int num);

int main() {
    for (int i = 100; i <= 9999; i++) {
        if (armstrong(i)) {
            cout << i << " число Армстронга" << endl;
        }
    }
}

bool armstrong(int num) {
    string numAsString = to_string(num); // представление числа в виде строки
    int len = numAsString.length(); // получаем длину числа

    int sum = 0;

    for (char digit : numAsString) { // проходим по "цифрам"
        int numericValue = digit - '0'; // приводим char к типу int ('9' - '0' == 9)
        sum += pow(numericValue, len) ; 
    }

    return sum == num;
}