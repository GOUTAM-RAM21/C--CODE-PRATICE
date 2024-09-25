#include<iostream>
using namespace std;

int fibo(int n) {
    if(n==1 || n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}

int main() {
    cout << fibo(8); // note the correction here
    return 0; // it's a good practice to return 0 at the end of main()
}