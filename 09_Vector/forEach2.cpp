// for each loop on vector

#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<char>vec = {'a','e','i','o','u'};
    for(char i : vec){
        cout<<i<<" ";
    }
    return 0;
}