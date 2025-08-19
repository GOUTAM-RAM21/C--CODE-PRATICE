#include<iostream>
using namespace std;
#include<string.h>
#include<algorithm>

    int main() {
        string s="goutamdas";
        string t="dasgoutam";
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) cout<<true;
        else cout<<false;
    }