//brute force approach
// #include <bits/stdc++.h>
// using namespace std;

// // Solution class
// class Solution {
// public:
//     // Function to move all zeroes to end
//     vector<int> moveZeroes(vector<int>& arr) {
//         // Create temp array
//         vector<int> temp(arr.size(), 0);

//         // Pointer to fill temp
//         int index = 0;

//         // Traverse input array
//         for (int i = 0; i < arr.size(); i++) {
//             // If non-zero, add to temp
//             if (arr[i] != 0) {
//                 temp[index] = arr[i];
//                 index++;
//             }
//         }

//         // Copy back temp to original
//         for (int i = 0; i < arr.size(); i++) {
//             arr[i] = temp[i];
//         }

//         // Return updated array
//         return arr;
//     }
// };

// // Main function
// int main() {
//     vector<int> arr = {0, 1, 0, 3, 12};
//     Solution sol;
//     vector<int> result = sol.moveZeroes(arr);

//     // Print result
//     cout << "Array after moving zeroes: ";
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }
// Time complexity: O(n)
// Space complexity: O(n)

//optimal approach
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to move zeroes to the end
    void moveZeroes(vector<int>& nums) {
        // Pointer to the first zero
        int j = -1;

        // Find the first zero
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        // If no zero found, return
        if (j == -1) return;

        // Start from the next index of first zero
        for (int i = j + 1; i < nums.size(); i++) {
            // If current element is non-zero
            if (nums[i] != 0) {
                // Swap with nums[j]
                swap(nums[i], nums[j]);
                // Move j to next zero
                j++;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums);

    // Print the result
    for (int num : nums) cout << num << " ";
    cout << endl;
    return 0;
}
// Time complexity: O(n)
// Space complexity: O(1)