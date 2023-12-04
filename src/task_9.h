/*
 * Author: Aliyor Ergsshev
 * Date: 04.12.2023
 * Name: Aliyor
 */
#include <iostream>
#include <vector>

using namespace std;

int findKthMissingPositiveNumber(vector<int>& arr, int k) {
    int size = arr.size();
    
    int currentNumber = 1; 
    int countMissing = 0; 

    while (countMissing < k) {
        if (currentNumber == arr[countMissing]) {
            currentNumber++;
        } else {
            countMissing++;
        }
    }

    return currentNumber + k - 1;
}

int main() {
    int size, k;
    cin >> size >> k;

    vector<int> arr(size);
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int result = findKthMissingPositiveNumber(arr, k);

    cout << result << endl;

    return 0;
}
