// Second Largest Element

// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.


// Example 1

// Input: nums = [8, 8, 7, 6, 5]

// Output: 7

// Explanation:

// The largest value in nums is 8, the second largest is 7

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {

        int n = nums.size();

        if(n < 2) {
            return -1;
        }

        int large = INT_MIN;
        int secondLarge = INT_MIN;

        for(int i = 0; i < n; i++) {

            if(nums[i] > large) {
                secondLarge = large;
                large = nums[i];
            }
            else if(nums[i] > secondLarge && nums[i] != large) {
                secondLarge = nums[i];
            }
        }

        // If second largest does not exist
        if(secondLarge == INT_MIN) {
            return -1;
        }

        return secondLarge;
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

    int ans = obj.secondLargestElement(nums);

    if(ans == -1) {
        cout << "Second largest element does not exist" << endl;
    }
    else {
        cout << "Second largest element is: " << ans << endl;
    }

    return 0;
}