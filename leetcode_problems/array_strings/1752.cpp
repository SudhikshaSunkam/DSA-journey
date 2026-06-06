// 1752. Check if Array Is Sorted and Rotated

// Given an array nums, return true if the array was originally sorted in non-decreasing order, 
// then rotated some number of positions (including zero). Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of 
// the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

// Example 1:

// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].
// Example 2:

// Input: nums = [2,1,3,4]
// Output: false
// Explanation: There is no sorted array once rotated that can make nums.
// Example 3:

// Input: nums = [1,2,3]
// Output: true
// Explanation: [1,2,3] is the original sorted array.
// You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.

// Approach Type

// Single Pass Greedy Observation
// Circular Sorted Order Check
// Counting Breaks in Sorted Order

// Intuition

// A sorted rotated array can have at most one point where the order decreases.

// Example:
// 3 4 5 1 2
//       ^

// Only one break exists:

// 5 > 1
// If there are more than one such breaks, the array cannot be sorted and rotated.

// Example of invalid array:

// 3 4 1 5 2
// Breaks:

// 4 > 1
// 5 > 2
// So answer becomes false.

// Approach

// Traverse the array once.
// Count how many times:
// nums[i] > nums[(i+1)%n]
// %n helps compare the last element with the first element.
// If count ≤ 1 → return true
// Else → return false

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {

        int count = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {

            if(nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        return count <= 1;
    }
};

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;

    if(obj.check(nums)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}
// Time Complexity	O(n)
// Space Complexity O(1)
//This problem is solved using a Single Pass Greedy Observation, which is an efficient way to check the properties of the array in one traversal.