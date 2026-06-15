#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    // push the item in the deque
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);

    // use the push_front 
    d.push_front(4);
    d.push_front(5);

    for(int val : d){
        cout<<val<<" ";
    }

    // pop the item 
    d.pop_back();
    d.pop_front();
    cout<<endl;
    cout<<"After pop the item :"<<" ";
    for(int val : d){
        cout<<val<<" ";
    }
    return 0;
}