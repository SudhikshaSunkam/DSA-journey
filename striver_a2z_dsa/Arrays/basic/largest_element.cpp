// Given an array of integers nums, return the value of the largest element in the array

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int max=nums[0];
        
        for(int i=0;i<=nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
            }
        }
    return max;
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

    cout << "largest element in the array is " << obj.largestElement(nums) << endl;

    return 0;
}