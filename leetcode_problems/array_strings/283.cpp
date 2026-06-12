// Move Zeroes

// Given an integer array nums, move all 0's to the end of it while maintaining 
// the relative order of the non-zero elements.

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int i = -1;

    // Find the first zero
    for (int j = 0; j < n; j++) {
        if (nums[j] == 0) {
            i = j;
            break;
        }
    }

    // If there are no zeros, nothing to do
    if (i == -1) {
        return;
    }

    // Move non-zero elements to the earliest zero position
    for (int j = i + 1; j < n; j++) {
        if (nums[j] != 0) {
            swap(nums[i], nums[j]);
            i++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    moveZeroes(nums);

    cout << "Array after moving zeroes: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
// Time complexity: O(n)
// Space complexity: O(1)
//It uses the two-pointer (slow-fast pointer) approach.