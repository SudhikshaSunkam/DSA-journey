// 50. Pow(x, n)

// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

// Example 1:

// Input: x = 2.00000, n = 10
// Output: 1024.00000
// Example 2:

// Input: x = 2.10000, n = 3
// Output: 9.26100
// Example 3:

// Input: x = 2.00000, n = -2
// Output: 0.25000
// Explanation: 2-2 = 1/22 = 1/4 = 0.25

#include <iostream>

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        if (x == 0) return 0.0;
        if (x == 1) return 1.0;
        if (x == -1 && n % 2 == 0) return 1.0;
        if (x == -1 && n % 2 != 0) return -1.0;

        long long binForm = n;

        if (n < 0) {
            x = 1 / x;
            binForm = -binForm;
        }

        double ans = 1.0;

        while (binForm > 0) {
            if (binForm % 2 == 1) {
                ans *= x;
            }

            x *= x;
            binForm /= 2;
        }

        return ans;
    }
};

int main() {
    double x;
    int n;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter exponent (n): ";
    cin >> n;

    Solution obj;
    cout << "Result = " << obj.myPow(x, n) << endl;

    return 0;
}
// binary exponentiation method
//time complexity: O(log n)
//space complexity: O(1)