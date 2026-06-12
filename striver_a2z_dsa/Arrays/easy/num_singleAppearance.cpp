//brute force approach

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the single non-repeating element using brute force
    int getSingleElement(vector<int>& arr) {
        int n = arr.size();

        // Loop through every element
        for (int i = 0; i < n; i++) {
            int num = arr[i]; // current element to check
            int cnt = 0;

            // Count occurrences of this element
            for (int j = 0; j < n; j++) {
                if (arr[j] == num)
                    cnt++;
            }

            // If it occurs only once, return it
            if (cnt == 1) return num;
        }

        // This line should never be reached
        return -1;
    }
};

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};

    Solution obj;
    int ans = obj.getSingleElement(arr);

    cout << "The single element is: " << ans << endl;

    return 0;
}
//time complexity: O(n^2)
//space complexity: O(1)

//better approach
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the single non-repeating element using a hash array
    int getSingleElement(vector<int>& arr) {
        int n = arr.size();

        // Step 1: Find the maximum value in the array
        int maxi = arr[0];
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, arr[i]);
        }

        // Step 2: Declare and initialize hash array of size maxi+1
        vector<int> hash(maxi + 1, 0);

        // Step 3: Count the frequency of each number
        for (int i = 0; i < n; i++) {
            hash[arr[i]]++;
        }

        // Step 4: Find the element that occurs exactly once
        for (int i = 0; i < n; i++) {
            if (hash[arr[i]] == 1)
                return arr[i];
        }

        return -1; // fallback, shouldn't occur in valid input
    }
};

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};

    Solution obj;
    int ans = obj.getSingleElement(arr);

    cout << "The single element is: " << ans << endl;

    return 0;
}
//time complexity: O(n)
//space complexity: O(max(arr))

//optimal approach
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the single non-repeating element using XOR
    int getSingleElement(vector<int>& arr) {
        int n = arr.size();
        int xorr = 0;

        // XOR all elements. Duplicates cancel out, leaving the single element.
        for (int i = 0; i < n; i++) {
            xorr = xorr ^ arr[i];
        }

        return xorr;
    }
};

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};

    Solution obj;
    int ans = obj.getSingleElement(arr);

    cout << "The single element is: " << ans << endl;

    return 0;
}
//time complexity: O(n)
//space complexity: O(1)