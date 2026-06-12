//with negative numbers

// Problem Statement: Given an array containing both positive and negative integers, we have to 
// find the length of the longest subarray with the sum of all elements equal to zero.

//brute force approach
#include <bits/stdc++.h>
using namespace std;

// compute length of the longest subarray with sum 0
int solve(vector<int>& a) {
    // store best length found so far
    int maxLen = 0;
    // map prefix sum -> first index seen
    unordered_map<int, int> sumIndexMap;
    // running prefix sum
    int sum = 0;

    // iterate through the array
    for (int i = 0; i < (int)a.size(); i++) {
        // update running sum
        sum += a[i];

        // if sum is zero, subarray [0..i] has zero sum
        if (sum == 0) {
            // update best length
            maxLen = i + 1;
        }
        // if this sum seen before, subarray (prevIndex..i] has zero sum
        else if (sumIndexMap.find(sum) != sumIndexMap.end()) {
            // maximize length using previous index
            maxLen = max(maxLen, i - sumIndexMap[sum]);
        }
        // first time seeing this sum, store its index
        else {
            sumIndexMap[sum] = i;
        }
    }

    // return best length
    return maxLen;
}

// program entry
int main() {
    // sample input
    vector<int> a = {9, -3, 3, -1, 6, -5};
    // print result
    cout << solve(a) << endl;
    // exit
    return 0;
}
//time complexity: O(n)
//space complexity: O(n)

//optimal approach
#include <bits/stdc++.h>
using namespace std;

// compute length of the longest subarray with sum 0
int maxLen(int A[], int n) {
  // map prefix sum -> first index seen
  unordered_map<int, int> mpp;
  // best length so far
  int maxi = 0;
  // running prefix sum
  int sum = 0;

  // iterate over the array
  for (int i = 0; i < n; i++) {
    // update running sum
    sum += A[i];

    // if sum is zero, subarray [0..i] has zero sum
    if (sum == 0) {
      // update best length
      maxi = i + 1;
    }
    // otherwise check if this sum was seen before
    else {
      // when seen, zero-sum segment between previous index + 1 and i
      if (mpp.find(sum) != mpp.end()) {
        // maximize length
        maxi = max(maxi, i - mpp[sum]);
      }
      // first time seeing this sum
      else {
        // record index
        mpp[sum] = i;
      }
    }
  }

  // return best length
  return maxi;
}

// program entry
int main() {
  // sample input
  int A[] = {9, -3, 3, -1, 6, -5};
  // compute size
  int n = sizeof(A) / sizeof(A[0]);
  // print result
  cout << maxLen(A, n) << endl;
  // exit
  return 0;
}
//time complexity: O(n)
//space complexity: O(n)

//without negative numbers

// Problem Statement: Given an array nums of size n and an integer k, find the 
// length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

//brute force approach
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums, int k)
    {
        int n = nums.size(); 
        int maxLength = 0;

        // starting index
        for (int startIndex = 0; startIndex < n; startIndex++) { 
            // ending index
            for (int endIndex = startIndex; endIndex < n; endIndex++) { 
                /* add all the elements of 
                   subarray = nums[startIndex...endIndex]  */
                int currentSum = 0;
                for (int i = startIndex; i <= endIndex; i++) {
                    currentSum += nums[i];
                }

                if (currentSum == k)
                    maxLength = max(maxLength, endIndex - startIndex + 1);
            }
        }
        return maxLength;
    }
};

int main()
{
    vector<int> a = { -1, 1, 1 };
    int k = 1;

    // Create an instance of the Solution class
    Solution solution;
    // Function call to get the result
    int len = solution.longestSubarray(a, k);
    
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
//time complexity: O(n^3)
//space complexity: O(1)

//optimal approach
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    // Function to find the length of longest subarray having sum k
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        
        // To store the maximum length of the subarray
        int maxLen = 0;
        
        // Pointers to mark the start and end of window
        int left = 0, right = 0;
        
        // To store the sum of elements in the window
        int sum = nums[0];
        
        // Traverse all the elements
        while(right < n) {
            
            // If the sum exceeds K, shrink the window
            while(left <= right && sum > k) {
                sum -= nums[left];
                left++;
            }
            
            // store the maximum length
            if(sum == k) {
                maxLen = max(maxLen, right - left + 1);
            }
            
            right++;
            if(right < n) sum += nums[right];
        }
        
        return maxLen;
    }
};

int main() {
	vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    
	// Creating an object of Solution class
	Solution sol;

	/* Function call to find the length
	of longest subarray having sum k */
	int ans = sol.longestSubarray(nums, k);

	cout << "The length of longest subarray having sum k is: " << ans;

	return 0;
}
//time complexity: O(n)
//space complexity: O(1)