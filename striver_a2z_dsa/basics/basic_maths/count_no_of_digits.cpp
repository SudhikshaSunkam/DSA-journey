//brute
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countDigits(int n){

    int cnt = 0;
    while(n > 0){

        cnt = cnt + 1;

        n = n / 10;
    }
    return cnt;
}

int main() {
    int N = 329823;
    cout << "N: "<< N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}
//time complexity: O(d) where d is the number of digits in the input number.
//space complexity: O(1)

//optimal

// #include <iostream>
// #include <cmath>
// #include <algorithm>
// using namespace std;


// int countDigits(int n){
    
//     int cnt = (int)(log10(n)+1);

//     // The expression (int)(log10(n)+1)
//     // calculates the number of digits in 'n'
//     // and casts it to an integer.
    
   
//     return cnt;
// }

// int main() {
//     int N = 329823;
//     cout << "N: "<< N << endl;
//     int digits = countDigits(N);
//     cout << "Number of Digits in N: "<< digits << endl;
//     return 0;
// }
//
//time complexity: O(1)
//space complexity: O(1)