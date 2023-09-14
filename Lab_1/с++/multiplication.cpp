#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;

    int result = 0;

    for (int i = 0; i < b; i++) {
        result += a;
    }

    cout << "Результат умножения: " << result << endl;

    return 0;
}
