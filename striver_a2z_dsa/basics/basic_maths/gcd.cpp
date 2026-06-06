//brute
#include <iostream>
#include <algorithm>

using namespace std;

int findGcd(int n1, int n2) {
    
    int gcd = 1;

    for(int i = 1; i <= min(n1, n2); i++) {   
        if(n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    
    return gcd;
}

int main() {
    int n1 = 20, n2 = 15;
    
    int gcd = findGcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}
//time complexity: O(min(n1, n2)) where n1 and n2 are the input numbers.
//space complexity: O(1)

//better
// #include <iostream>
// #include <algorithm>

// using namespace std;

// int findGcd(int n1, int n2) {
    
//     for(int i = min(n1, n2); i > 0; i--) {
        
//         if(n1 % i == 0 && n2 % i == 0) {
            
//             return i;
//         }
//     }
    
//     return 1;
// }
//time complexity: O(min(n1, n2)) where n1 and n2 are the input numbers.
//space complexity: O(1)

// int main() {
//     int n1 = 20, n2 = 15;
    
//     // Find the GCD of n1 and n2
//     int gcd = findGcd(n1, n2);

//     cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

//     return 0;
// }

// //optimal
// #include <iostream>
// #include <algorithm>

// using namespace std;

// int findGcd(int a, int b) {
    
//     while(a > 0 && b > 0) {
       
//         if(a > b) {
           
//             a = a % b;
//         }
        
//         else {
           
//             b = b % a; 
//         }
//     }
    
//     if(a == 0) {
//         return b;
//     }
    
//     return a;
// }

// int main() {
//     int n1 = 20, n2 = 15;
    
//     int gcd = findGcd(n1, n2);

//     cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

//     return 0;
// }
//time complexity: O(log(min(n1, n2))) where n1 and n2 are the input numbers.
//space complexity: O(1)