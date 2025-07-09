#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

void sort(int i,int j,vector<int>& v){
    while(i<j){
        if(v[j]==1) j--;
        if(v[i]==0) i++;
        if(i>j) break;
        if(v[i]==1 & arr[j]==0) 
          v[i]==1;
          v[j]==0;
          j--;
          i++;

    }
}


int main() {
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    
    }
    sort(v);
    return 0;

}
