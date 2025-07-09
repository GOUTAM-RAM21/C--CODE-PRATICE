#include<iostream>
#include<climits>
using namespace std;
int main(){
    int marks[5]={21,23,45,45,56};
    int size=5;
    int largest=INT_MIN;

    for(int i=0; i<size; i++){
        if(marks[i]>largest) {
        largest=marks[i];
    }
}
cout<<"largest number is "<<largest << endl;
return 0;
}