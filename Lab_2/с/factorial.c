#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main() {
    printf("%d\n", factorial(13));
    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    int* cache = (int*)malloc((n + 1) * sizeof(int));

    cache[0] = 1;
    cache[1] = 1;

    for (int i = 2; i <= n; i++) {
        cache[i] = cache[i - 1] * i;
    }

    int result = cache[n];
    free(cache);

    return result;
}
