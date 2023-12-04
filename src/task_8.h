/*
 * Author: Aliyor Ergsshev
 * Date: 04.12.2023
 * Name: Aliyor
 */
#include <iostream>
#include <vector>

using namespace std;

int determineMissingNumber(vector<int>& nums) {
    int n = nums.size() + 1; 
    
    int expectedSum = (n * (n + 1)) / 2;

    int actualSum = 0;
    for (int num : nums) {
        actualSum += num;
    }

    int missingNumber = expectedSum - actualSum;

    return missingNumber;
}

int main() {
    int size;
    cin >> size;

    vector<int> nums(size - 1);
    for (int i = 0; i < size - 1; ++i) {
        cin >> nums[i];
    }

    int missingNumber = determineMissingNumber(nums);

    cout << "0 " << missingNumber << endl;

    return 0;
}
