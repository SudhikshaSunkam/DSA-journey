//brute force approach
#include <bits/stdc++.h>
using namespace std;

// Recursive function to perform Bubble Sort
void bubble_sort(int arr[], int n) {
    // Base Case: If the array size is 1, it's already sorted
    if (n == 1) return;

    // Perform one pass of Bubble Sort: push the largest element to the end
    for (int j = 0; j <= n - 2; j++) {
        // Swap if elements are in the wrong order
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    // Recur for the remaining unsorted part (one less than before)
    bubble_sort(arr, n - 1);
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Call the recursive Bubble Sort function
    bubble_sort(arr, n);

    cout << "After Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
//
// Time Complexity: O(n^2) in the worst and average cases, O(n) in the best case (when the array is already sorted)
// Space Complexity: O(1) for the iterative version, O(n) for the recursive

// optimized approach
#include <bits/stdc++.h>
using namespace std;

// Recursive Bubble Sort with early exit optimization
void bubble_sort(int arr[], int n) {
    // Base Case: if the size is 1, it's already sorted
    if (n == 1) return;

    int didSwap = 0; // Flag to check if any swap occurred in this pass

    // One pass: push the largest element to the end
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            // Swap arr[j] and arr[j + 1]
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            didSwap = 1; // Mark that we did a swap
        }
    }

    // If no swap happened, array is already sorted
    if (didSwap == 0) return;

    // Recurse for the remaining unsorted portion
    bubble_sort(arr, n - 1);
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);

    cout << "After Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// Time Complexity: O(n^2) in the worst and average cases, O(n) in the best case (when the array is already sorted)
// Space Complexity: O(1) for the iterative version, O(n) for the recursive