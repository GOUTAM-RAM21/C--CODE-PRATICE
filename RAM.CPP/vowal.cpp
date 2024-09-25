#include<iostream>
using namespace std;
int main() {
char ch;
cout<<"enter the charachter";
cin>>ch;
int ascii=int(ch);
if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<90)){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<"it is vowel";
    }
    else{
        cout<<"it is consonant";
    }
}
    else{
        cout<<"it not char";
    }

return 0;
}