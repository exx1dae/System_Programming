#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Введите трёхзначное число: ";
    cin >> num;

    if (num >= 100 && num <= 999) {
        cout << "Введено корректное трёхзначное число" << endl;
    } else {
        cout << "Введено некорректное число" << endl;
    }

    return 0;
}
