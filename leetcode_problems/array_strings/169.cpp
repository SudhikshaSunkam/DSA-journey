// 169. Majority Element

// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:

// Input: nums = [3,2,3]
// Output: 3

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;

        // Moore's Voting Algorithm
        for (int i = 0; i < nums.size(); i++) {
            if (freq == 0) {
                ans = nums[i];
            }

            if (ans == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }

        // Verification step
        int count = 0;
        for (int val : nums) {
            if (val == ans) {
                count++;
            }
        }

        if (count > nums.size() / 2)
            return ans;
        else
            return -1;
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
    int result = obj.majorityElement(nums);

    if (result != -1)
        cout << "Majority Element = " << result << endl;
    else
        cout << "No Majority Element exists." << endl;

    return 0;
}
//time complexity: O(n)
//space complexity: O(1)
//This problem is solved using Moore's Voting Algorithm, a famous algorithm used to find the majority element in linear time and constant space.

//A majority element is an element that appears more than n/2 times in the array.