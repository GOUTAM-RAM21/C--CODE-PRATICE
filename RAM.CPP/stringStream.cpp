#include<iostream>
#include<string.h>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str="my name is goutam and brllent boy and he is boy";
    stringstream ss(str);
    string temp;
     vector<string>v;
    while(ss>>temp) {
       // cout<<temp<<endl;
        v.push_back(temp);// vector store karva hai

   // }
   // for(int i=0; i<v.size(); i++){
  //      cout<<v[i]<<endl;
    //}
    cout<<endl;
    sort(v.begin(),v.end());
    //for(int i=0; i<v.size(); i++){
       // cout<<v[i]<<endl;
       int maxCount=1;
       int count=1;
       for(int i=0; i<v.size(); i++) {
        if(v[i]==v[i-1])
            count++;
        else count=1;
        maxCount=max(maxCount,count);
    }
}


    
return 0;
}

