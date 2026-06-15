#include<iostream>
using namespace std;
int main(){
    pair<int,pair<char,int>>p = {1,{'a',3}};

    cout<<p.first;
    cout<<p.second.first;
    cout<<p.second.second;

    return 0;
}