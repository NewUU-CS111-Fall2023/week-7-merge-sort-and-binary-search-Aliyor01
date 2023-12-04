/*
 * Author: Aliyor Ergsshev
 * Date: 04.12.2023
 * Name: Aliyor
 */
#include <iostream>
#include <vector>

using namespace std;

int findKthFactor(int n, int k) {
    vector<int> factors;

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            factors.push_back(i);
        }
    }

    if (k <= factors.size()) {
        return factors[k - 1];
    } else {
        return -1;
    }
}

int main() {
    int number, k;
    cin >> number >> k;

    int result = findKthFactor(number, k);

    cout << result << endl;

    return 0;
}
