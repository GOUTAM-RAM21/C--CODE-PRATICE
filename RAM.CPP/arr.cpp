#include<iostream>
#include<climits>

using namespace std;


int main() {
    int marks[5]={12,23,21,24,45};
    int size=5;
    
    
    
    int smallest= INT_MAX;

    for(int i=0; i<size; i++) {
        if(marks[i]<smallest){
        smallest=marks[i];
        }
        
    }
    cout << "Smallest number is: " << smallest << endl;
    
    return 0;
}