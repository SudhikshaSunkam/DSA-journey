#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   
    int sumOfNaturalNumbers(int N) {
        if (N == 1) {
            return 1;
        }
        return N + sumOfNaturalNumbers(N - 1);
    }
};

int main() {
    Solution obj;
    int N;
    cin >> N;
    cout << obj.sumOfNaturalNumbers(N) << endl;
    return 0;
}
//time complexity: O(n) where n is the input number N.
//space complexity: O(n) where n is the input number N due to recursive call stack