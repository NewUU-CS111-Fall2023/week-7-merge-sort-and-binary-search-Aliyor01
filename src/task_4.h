/*
 * Author: Aliyor Ergsshev
 * Date: 04.12.2023
 * Name: Aliyor
 */
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findKthSmallest(const vector<vector<int>>& matrix, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    int n = matrix.size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            minHeap.push(matrix[i][j]);

            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
    }

    return minHeap.top();
}

int main() {
    int size, k;
    cin >> size >> k;

    vector<vector<int>> matrix(size, vector<int>(size));

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrix[i][j];
        }
    }

    int result = findKthSmallest(matrix, k);
    cout << result << endl;

    return 0;
}
