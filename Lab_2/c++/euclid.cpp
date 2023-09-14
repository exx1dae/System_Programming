#include <iostream>

using namespace std;

int euclid(int dividerFirst, int dividerSecond);

int main() {
    cout << (euclid(36, 48)) << endl;
}

int euclid(int dividerFirst, int dividerSecond) {
    

    if (dividerFirst != dividerSecond) { // если числа равны, то это и является НОД
        if (dividerFirst > dividerSecond) {
            dividerFirst = dividerFirst - dividerSecond; // отнимаем у бОльшего делителя меньший
        } else {
            dividerSecond = dividerSecond - dividerFirst; // аналогично
        }
        return euclid(dividerFirst, dividerSecond); // рекурсия
    }
    return dividerSecond;
}