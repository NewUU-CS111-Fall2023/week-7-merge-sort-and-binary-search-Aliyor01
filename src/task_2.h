/*
 * Author: Aliyor Ergsshev
 * Date: 04.12.2023
 * Name: Aliyor
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> Y(n);
    for (int i = 0; i < n; ++i) {
        cin >> Y[i];
    }

    vector<int> diffs(n);
    for (int i = 0; i < n; ++i) {
        diffs[i] = Y[i] - i - 1;
    }

    sort(diffs.begin(), diffs.end());

    long long beautyScore = 0;
    for (int i = 0; i < n; ++i) {
        beautyScore += abs(diffs[i] - diffs[n / 2]);
    }

    cout << beautyScore << endl;

    return 0;
}

