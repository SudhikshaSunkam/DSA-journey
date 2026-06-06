// Linear Search

// Given an array of integers nums and an integer target, find the smallest index (0 based indexing) 
// where the target appears in the array. If the target is not found in the array, return -1

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {

        // Correct way to get size of vector
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] == target) {
                return i;
            }
        }

        return -1;
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

    int target;
    cout << "Enter target element: ";
    cin >> target;

    int index = obj.linearSearch(nums, target);

    if(index != -1) {
        cout << "Element found at index: " << index << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}
//time complexity: O(n)
//space complexity: O(1)