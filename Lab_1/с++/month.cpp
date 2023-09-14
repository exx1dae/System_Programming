#include <iostream>

using namespace std;

int main() {
    int month;
    cout << "Введите номер месяца: ";
    cin >> month;

    if (month >= 1 && month <= 12) {
        if (month >= 3 && month <= 5) {
            cout << "Весна" << endl;
        } else if (month >= 6 && month <= 8) {
            cout << "Лето" << endl;
        } else if (month >= 9 && month <= 11) {
            cout << "Осень" << endl;
        } else {
            cout << "Зима" << endl;
        }
    } else {
        cout << "Некорректный номер месяца" << endl;
    }

    return 0;
}
