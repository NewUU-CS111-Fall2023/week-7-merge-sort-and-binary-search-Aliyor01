/*
 * Author: Aliyor Ergsshev
 * Date: 04.12.2023
 * Name: Aliyor
 */
#include <iostream>
using namespace std;

int calculatePower(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }

    int result = base * calculatePower(base, exponent - 1);
    return result;
}

int main() {
    int base, exponent;
    cin >> base;
    cin >> exponent;

    int result = calculatePower(base, exponent);
    cout << result << endl;

    return 0;
}
