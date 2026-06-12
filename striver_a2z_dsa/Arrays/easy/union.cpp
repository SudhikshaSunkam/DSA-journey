//approach 1: using map
// #include <bits/stdc++.h>
// using namespace std;

// // Define the Solution class
// class Solution {
// public:
//     // Function to find union of two arrays
//     vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
//         // Create a map to store frequency of each element
//         map<int, int> freq;
//         // Create a vector to store the union result
//         vector<int> Union;
//         // Loop through first array and store frequency
//         for (int i = 0; i < n; i++)
//             freq[arr1[i]]++;
//         // Loop through second array and store frequency
//         for (int i = 0; i < m; i++)
//             freq[arr2[i]]++;
//         // Traverse the map to get unique sorted elements
//         for (auto &it : freq)
//             Union.push_back(it.first);
//         // Return the union vector
//         return Union;
//     }
// };

// int main() {
//     // Define size of first array
//     int n = 10;
//     // Define size of second array
//     int m = 7;
//     // Initialize first array
//     int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     // Initialize second array
//     int arr2[] = {2, 3, 4, 4, 5, 11, 12};
//     // Create object of Solution class
//     Solution obj;
//     // Call FindUnion function
//     vector<int> Union = obj.FindUnion(arr1, arr2, n, m);
//     // Print output message
//     cout << "Union of arr1 and arr2 is " << endl;
//     // Print all elements of union
//     for (auto &val : Union)
//         cout << val << " ";
//     // Return success
//     return 0;
// }
// Time Complexity: O((n + m) log(n + m)) due to map insertion and traversal
// Space Complexity: O(n + m) for storing the frequency map and union vector

//approach 2: using set
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Function to find the union of two arrays using set
//     vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
//         // Create a set to store unique elements
//         set<int> st;

//         // Insert elements from first array
//         for (int i = 0; i < n; i++) {
//             st.insert(arr1[i]);
//         }

//         // Insert elements from second array
//         for (int i = 0; i < m; i++) {
//             st.insert(arr2[i]);
//         }

//         // Convert set to vector
//         vector<int> unionArr(st.begin(), st.end());
//         return unionArr;
//     }
// };

// int main() {
//     int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int arr2[] = {2, 3, 4, 4, 5, 11, 12};
//     int n = 10, m = 7;

//     Solution obj;
//     vector<int> result = obj.findUnion(arr1, arr2, n, m);

//     cout << "Union of arr1 and arr2 is: ";
//     for (int val : result) {
//         cout << val << " ";
//     }
//     return 0;
// }
// Time Complexity: O((n + m) log(n + m)) due to set insertion
// Space Complexity: O(n + m) for storing the set and union vector

//optimal approach

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find union of two sorted arrays using two pointers
    vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        // Vector to store union elements
        vector<int> Union;

        // Initialize two pointers for both arrays
        int i = 0, j = 0;

        // Loop until either pointer reaches the end
        while (i < n && j < m) {
            // If current element in arr1 is smaller
            if (arr1[i] < arr2[j]) {
                // Add element if union empty or different from last added
                if (Union.empty() || Union.back() != arr1[i])
                    Union.push_back(arr1[i]);
                i++;  // Move pointer in arr1
            }
            // If current element in arr2 is smaller
            else if (arr2[j] < arr1[i]) {
                // Add element if union empty or different from last added
                if (Union.empty() || Union.back() != arr2[j])
                    Union.push_back(arr2[j]);
                j++;  // Move pointer in arr2
            }
            else {
                // Elements are equal, add once if not duplicate
                if (Union.empty() || Union.back() != arr1[i])
                    Union.push_back(arr1[i]);
                i++; j++;  // Move both pointers
            }
        }

        // Append remaining elements from arr1
        while (i < n) {
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }

        // Append remaining elements from arr2
        while (j < m) {
            if (Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }

        // Return the final union vector
        return Union;
    }
};

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n = 10, m = 7;

    Solution obj;
    vector<int> result = obj.findUnion(arr1, arr2, n, m);

    cout << "Union of arr1 and arr2 is: ";
    for (int val : result) cout << val << " ";
    return 0;
}
// Time Complexity: O(n + m) due to single pass through both arrays
// Space Complexity: O(n + m) in worst case if all elements are unique and added