#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int revNum = 0;

        while (n > 0) {
            
            int lastDigit = n % 10;

            revNum = revNum * 10 + lastDigit;

            n = n / 10;
        }

        return revNum;
    }
};


int main() {
    Solution obj;
    int num = 12345;
    cout << obj.reverseNumber(num) << endl;  
    return 0;
}
//time complexity: O(d) where d is the number of digits in the input number.
//space complexity: O(1)