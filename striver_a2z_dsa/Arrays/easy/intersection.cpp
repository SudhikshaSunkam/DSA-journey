#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find intersection of two sorted arrays using two pointers
    vector<int> intersection(int arr1[], int arr2[], int n, int m) {
        // Vector to store intersection elements
        vector<int> Intersection;

        // Initialize two pointers for both arrays
        int i = 0, j = 0;

        // Loop until either pointer reaches the end
        while (i < n && j < m) {
            // If current element in arr1 is smaller
            if (arr1[i] < arr2[j]) {
                i++;  // Move pointer in arr1
            }
            // If current element in arr2 is smaller
            else if (arr2[j] < arr1[i]) {
                j++;  // Move pointer in arr2
            }
            else {
                // Elements are equal, add to intersection
                Intersection.push_back(arr1[i]);
                i++; j++;  // Move both pointers
            }
        }

        // Return the final intersection vector
        return Intersection;
    }
};

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n = 10, m = 7;

    Solution obj;
    vector<int> result = obj.intersection(arr1, arr2, n, m);

    cout << "Intersection of arr1 and arr2 is: ";
    for (int val : result) cout << val << " ";
    return 0;
}
// Time Complexity: O(n + m) where n and m are the sizes of the two arrays.
// Space Complexity: O(min(n, m)) in the worst case when all elements are common