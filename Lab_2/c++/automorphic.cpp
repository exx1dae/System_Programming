#include <iostream>
#include <cmath>

using namespace std;

bool isAutomorphic(int num);

int main() {
    int n;

    cout << "Введите число n: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        if (isAutomorphic(i)) {
            cout << i << '|' << i * i << endl;
        }
    }
}

bool isAutomorphic(int num) {
    int square = num * num; // вычисляем квадрат числа

    /*
        Суть цикла -> сравнивать концовку числа, до тех пор пока она не отличается или число больше 0
    */
    
    while (num > 0) {
        if (num % 10 != square % 10) { // сравниваем концовки 
            return false;
        }
        num /= 10; 
        square /= 10;
    }

    return true;
}


