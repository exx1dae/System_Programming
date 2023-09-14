#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main() {
    int n;

    printf("Введите число n: ");
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1 || n == 2) {
        return 1;
    }

    int* cache = (int*)malloc((n + 1) * sizeof(int)); 
    // malloc - возвращает указатель на начало выделенной области; (n + 1) * sizeof(int) - размер массива

    cache[0] = 0;
    cache[1] = 1;

    for (int i = 2; i <= n; i++) {
        cache[i] = cache[i - 1] + cache[i - 2];
    }

    int result = cache[n];
    free(cache); // освобождаем память
    return result;
}
