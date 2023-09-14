#include <stdio.h>

int euclid(int dividerFirst, int dividerSecond);

int main() {
    printf("%d\n", euclid(36, 48));
    return 0;
}

int euclid(int dividerFirst, int dividerSecond) {
    if (dividerFirst != dividerSecond) {
        if (dividerFirst > dividerSecond) {
            dividerFirst = dividerFirst - dividerSecond;
        } else {
            dividerSecond = dividerSecond - dividerFirst;
        }
        return euclid(dividerFirst, dividerSecond);
    }
    return dividerSecond;
}
