#include <iostream>

using namespace std;

int fibonacci(int n);

int main() {
    int n;

    cout << "Введите число n: ";
    cin >> n;
    cout << (fibonacci(n)) << endl;
}

int fibonacci(int n) {
    if (n == 0) {return 0;} // Фибоначчи от 0 -> 0
    if (n == 1 || n == 2) {return 1;} // Фибоначчи от 1, 2 -> 1
   
    int* cache = new int[n + 1]; 
    // массив для прошлых чисел, ибо получение элемента через индекс на порядок быстрее рекурсии

    cache[0] = 0;
    cache[1] = 1;
    // начальные значения чисел Фибоначчи

    for (int i = 2; i <= n; i++) {
        cache[i] = cache[i - 1] + cache[i - 2]; // Функция Фибоначчи для вычисления числа
    }

    return cache[n];
}