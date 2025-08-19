#include<iostream>

using namespace std;
#include<string.h>
#include<algorithm>
int main(){
    string s;
   // cin>>s;
   getline(cin, s);
    sort(s.begin(),s.end());
    cout<<s;
}