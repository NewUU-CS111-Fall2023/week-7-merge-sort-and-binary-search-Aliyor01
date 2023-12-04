/*
 * Author: Aliyor Ergsshev
 * Date: 04.12.2023
 * Name: Aliyor
 */
#include <iostream>
#include <vector>

using namespace std;

pair<int, int> findInsertPosition(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return {1, mid};
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return {-1, low};
}

int main() {
    int size, target;
    cin >> size;

    vector<int> nums(size);
    for (int i = 0; i < size; ++i) {
        cin >> nums[i];
    }

    cin >> target;

    pair<int, int> result = findInsertPosition(nums, target);

    cout << result.first << " " << result.second << endl;

    return 0;
}
