// Left Rotate Array by One

// Given an integer array nums, rotate the array to the left by one.

// Note: There is no need to return anything, just modify the given array.

// Example 1

// Input: nums = [1, 2, 3, 4, 5]

// Output: [2, 3, 4, 5, 1]

// Explanation:

// Initially, nums = [1, 2, 3, 4, 5]

// Rotating once to left -> nums = [2, 3, 4, 5, 1]

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {

        int n = nums.size();

        int temp = nums[0];

        // Shift elements to the left
        for(int i = 1; i < n; i++) {
            nums[i - 1] = nums[i];
        }

        // Put first element at the end
        nums[n - 1] = temp;
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

    obj.rotateArrayByOne(nums);

    cout << "Array after rotation: ";

    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}
//time complexity: O(n)
//space complexity: O(1)