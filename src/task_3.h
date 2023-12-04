/*
 * Author: Aliyor Ergsshev
 * Date: 04.12.2023
 * Name: Aliyor
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;

    while (numTestCases--) {
        int sizeA, sizeB;
        cin >> sizeA >> sizeB;

        vector<int> arrayA(sizeA), arrayB(sizeB), mergedResult(sizeA + sizeB);

        for (int i = 0; i < sizeA; ++i) {
            cin >> arrayA[i];
        }

        for (int i = 0; i < sizeB; ++i) {
            cin >> arrayB[i];
        }

        int i = 0, j = 0, k = 0;

        while (i < sizeA && j < sizeB) {
            if (arrayA[i] >= arrayB[j]) {
                mergedResult[k++] = arrayA[i++];
            } else {
                mergedResult[k++] = arrayB[j++];
            }
        }

        while (i < sizeA) {
            mergedResult[k++] = arrayA[i++];
        }

        while (j < sizeB) {
            mergedResult[k++] = arrayB[j++];
        }

        for (int idx = 0; idx < sizeA + sizeB; ++idx) {
            cout << mergedResult[idx] << " ";
        }

        cout << endl;
    }

    return 0;
}
