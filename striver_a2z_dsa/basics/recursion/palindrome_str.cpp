#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i, string& s) {

    if (i >= s.length() / 2) return true;

    if (s[i] != s[s.length() - 1 - i]) return false;
    return palindrome(i + 1, s);
}

int main() {

    string s = "madam";

    cout << palindrome(0, s);  
    cout << endl;
    return 0;
}
//time complexity: O(n) where n is the length of the input string.
//space complexity: O(n) where n is the length of the input string due to recursive