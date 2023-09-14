#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Введите длины сторон треугольника: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Треугольник существует" << endl;
    } else {
        cout << "Треугольник не существует" << endl;
    }

    return 0;
}
