// Max Consecutive Ones

// Given a binary array nums, return the maximum number of consecutive 1's in the array.

#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int maxOnes = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == 1) {
            count++;
        } else {
            count = 0;
        }

        maxOnes = max(count, maxOnes);
    }

    return maxOnes;
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << "Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    int ans = findMaxConsecutiveOnes(nums);

    cout << "Maximum consecutive ones: " << ans << endl;

    return 0;
}
//time complexity: O(n) where n is the size of the input array
//space complexity: O(1) 
//This is a counting (streak) approach