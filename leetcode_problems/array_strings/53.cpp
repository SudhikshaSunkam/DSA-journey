// 53. Maximum Subarray

// Given an integer array nums, find the subarray with the largest sum, and return its sum.

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;

        for (int val : nums) {
            currSum += val;
            maxSum = max(currSum, maxSum);

            if (currSum < 0) {
                currSum = 0;
            }
        }

        return maxSum;
    }
};

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    cout << "Maximum Subarray Sum = " << obj.maxSubArray(nums) << endl;

    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
//This problem is solved using Kadane's Algorithm, 
//one of the most important Dynamic Programming techniques for arrays.