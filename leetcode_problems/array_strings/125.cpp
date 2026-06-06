// 125. Valid Palindrome

// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0, end = s.length() - 1;

        while (st < end) {
            if (!isalnum(s[st])) {
                st++;
                continue;
            }

            if (!isalnum(s[end])) {
                end--;
                continue;
            }

            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }

            st++;
            end--;
        }

        return true;
    }
};

int main() {
    Solution obj;
    
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (obj.isPalindrome(s))
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;

    return 0;
}
//two pointer approach
//time complexity: O(n)
//space complexity: O(1)