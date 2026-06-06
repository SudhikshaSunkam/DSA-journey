// 136. Single Number

// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Example 1:

// Input: nums = [2,2,1]

// Output: 1

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleNum = 0;

        for (int val : nums) {
            singleNum = singleNum ^ val;
        }

        return singleNum;
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
    cout << "Single Number = " << obj.singleNumber(nums) << endl;

    return 0;
}
//time complexity: O(n)
//space complexity: O(1)
//This problem is a classic Bit Manipulation problem that uses the properties of the XOR (^) operator.