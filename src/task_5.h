/*
 * Author: Aliyor Ergsshev
 * Date: 04.12.2023
 * Name: Aliyor
 */
#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

vector<int> findTopKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> frequencyMap;
    
    for (int num : nums) {
        frequencyMap[num]++;
    }

    priority_queue<pair<int, int>> maxHeap;

    for (auto& entry : frequencyMap) {
        maxHeap.push({entry.second, entry.first});

        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }

    vector<int> result;
    while (!maxHeap.empty()) {
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }

    return result;
}

int main() {
    int size, k;
    cin >> size;

    vector<int> nums(size);
    for (int i = 0; i < size; ++i) {
        cin >> nums[i];
    }

    cin >> k;

    vector<int> result = findTopKFrequent(nums, k);

    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}
