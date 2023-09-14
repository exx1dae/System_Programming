#include <iostream>

using namespace std;

int factorial(int n);

int main() {
    cout << (factorial(13)) << endl;
}


// Тот же подход, как и с числами Фибоначчи
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    int* cache = new int[n + 1];

    cache[0] = 1;
    cache[1] = 1;

    for (int i = 2; i <= n; i++) {
        cache[i] = cache[i-1] * i;
    }

    return cache[n];
}