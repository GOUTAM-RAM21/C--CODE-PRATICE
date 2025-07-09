#include<iostream>
#include <vector>

using namespace std;
void display(vector<int>& v){
     int n = v.size();  
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
void reversepart(int i,int j,vector<int>& v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return ;

}

void reverse(vector<int>& v){
     int i=0;
    int j=v.size()-1;
    while(i<=j){
       
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return ;
}
int main() {
    vector<int>v;
    v.push_back(7);
    v.push_back(6);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    display(v);
    //reversepart(0,2,v);
    reverse(v);
    display(v);
}