#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
  
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
   
    int n = 3;
    cout << factorial(n) << endl;
    return 0;
}
//time complexity: O(n) where n is the input number.
//space complexity: O(n) where n is the input number due to recursive call stack.