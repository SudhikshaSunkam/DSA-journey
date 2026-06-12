//brute force approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if the array is sorted
bool isSorted(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // If any element is smaller than the previous one, return false
            if (arr[j] < arr[i]) 
                return false;
        }
    }

    return true; // Return true if no unsorted elements are found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5;
    bool ans = isSorted(arr, n);
    
    // Output result
    if (ans) cout << "True" << endl;
    else cout << "False" << endl;
    
    return 0;
}
//time complexity: O(n^2)
//space complexity: O(1)

//optimized approach
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