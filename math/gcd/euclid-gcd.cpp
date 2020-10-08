#include <iostream>

using namespace std;

/******************************************EUCLID's GCD ALGORITHM ******************************************/

// Parameters: (Integer 1, Integer 2)
int gcd(int a, int b) { 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

/************************************************************************************/

int main() {
    int x = 10, y = 15;
    
    cout << gcd(x, y);
    
    return 0;
}
