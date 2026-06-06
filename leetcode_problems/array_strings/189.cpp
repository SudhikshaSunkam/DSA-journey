// 189. Rotate Array

// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        k = k % n;

        // Reverse entire array
        reverse(nums.begin(), nums.end());

        // Reverse first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Reverse remaining elements
        reverse(nums.begin() + k, nums.end());
    }
};

int main() {

    Solution obj;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    obj.rotate(nums, k);

    cout << "Array after rotation: ";

    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}
//time complexity: O(n)
//space complexity: O(1)