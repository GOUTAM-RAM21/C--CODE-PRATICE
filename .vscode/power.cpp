#include <iostream>
using namespace std;

// Function to calculate power using recursion
//int power(int base, int exp) {
    // Base case: anything raised to the power of 0 is 1
   // if (exp == 0)
       // return 1;
    // Recursive case: n^exp = n * n^(exp-1)
   // else
      //  return base * power(base, exp - 1);
      int power(int a,int b){
        int p=1;
        for(int i=1; i<=b; i++) {
            p*=a;
        }
        return p;
      
}

int main() {
    int base, exp;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;
    cout << base << " raised to the power of " << exp << " is " << power(base, exp);
    return 0;
}
