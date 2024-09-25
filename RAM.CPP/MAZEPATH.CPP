#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec) {
    if(sr>er||sc>er) return 0;
    if(sr==er&&sc==ec) return 1;
    int rightway=maze(sr,sr+1,er,ec);
    int downway=maze(sr+1,sc,er,ec);
    int totalway=rightway+downway;
    return totalway;

}
int main() {
    cout<<(1,2,3);
}