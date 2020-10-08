#include <iostream>
using namespace std; 
 
// Parameters: (Integer 1, Integer 2)
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

/************************************** EULER's TOTIENT FUNCTION ********************************/

int phi(unsigned int n) 
{ 
    unsigned int result = 1;
    
    for(int i = 2; i < n; i++) {
      if(gcd(i, n) == 1) 
        ++result;
    }
    
    return result; 
}

/**********************************************************************/
 
int main() 
{ 
    unsigned int n; 
    for (n = 1; n <= 10; n++) 
        cout << "phi(n) = " << phi(n) << endl; 
    return 0; 
} 
