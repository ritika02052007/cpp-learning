// for each loop on vector

#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int>vec = {2,4,6,8,10};
    for(int i : vec){
        cout<<i<<" ";
    }
    return 0;
}