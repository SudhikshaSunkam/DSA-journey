// Given an array nums of n integers, return 
//true if the array nums is sorted in non-decreasing order or else false.

#include <iostream>
#include <vector>

using namespace std;

class Solution {	
public:
    bool isSorted(vector<int>& nums) {
        int n = nums.size();

        for(int i = 1; i < n; i++) {
            if(nums[i] < nums[i - 1]) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution obj;

    vector<int> nums;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    if(obj.isSorted(nums)) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}
//time complexity: O(n)
//space complexity: O(1)