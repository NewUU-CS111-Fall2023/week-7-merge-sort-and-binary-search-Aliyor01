/*
 * Author: Aliyor Ergsshev
 * Date: 04.12.2023
 * Name: Aliyor
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculateRemainingSum(int T, vector<pair<int, vector<int>>> &testCases) {
    vector<int> results;

    for (int t = 0; t < T; ++t) {
        int N = testCases[t].first;
        vector<int> &A = testCases[t].second;

        vector<int> medians;
        for (int i = 1; i < N - 1; i += 2) {
            vector<int> subArray = {A[i - 1], A[i], A[i + 1]};
            sort(subArray.begin(), subArray.end());
            medians.push_back(subArray[1]);
        }

        int minMedian = *min_element(medians.begin(), medians.end());
        A.erase(find(A.begin(), A.end(), minMedian));

        int remainingSum = 0;
        for (int num : A) {
            remainingSum += num;
        }
        results.push_back(remainingSum);
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}

int main() {
    int T;
    cin >> T;

    vector<pair<int, vector<int>>> testCases;

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        testCases.push_back({N, A});
    }

    calculateRemainingSum(T, testCases);

    return 0;
}
