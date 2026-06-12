// brute force approach
#include<bits/stdc++.h>
using namespace std;

// Function to sort the array and return the largest element
int sortArr(vector<int>& arr) {
    // Sort the array in ascending order
    sort(arr.begin(), arr.end());
    
    // Return the last element (largest element) after sorting
    return arr[arr.size() - 1];
}

int main() {
    // Initialize arrays
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};
   
    // Find and output the largest element in both arrays
    cout << "The Largest element in the array is: " << sortArr(arr1) << endl;
    cout << "The Largest element in the array is: " << sortArr(arr2);
   
    return 0;
}
// Time Complexity: O(N log N), where N is the size of the array, as we are sorting the array.
// Space Complexity: O(1), as we are using a constant

//optimal approach
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int largestElement(vector<int>& nums) {
//         int max=nums[0];
        
//         for(int i=0;i<=nums.size();i++){
//             if(max<nums[i]){
//                 max=nums[i];
//             }
//         }
//     return max;
//     }
// };

// int main() {

//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     vector<int> nums(n);

//     cout << "Enter array elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     Solution obj;

//     cout << "largest element in the array is " << obj.largestElement(nums) << endl;

//     return 0;
// }
//time complexity: O(n)
//space complexity: O(1)
