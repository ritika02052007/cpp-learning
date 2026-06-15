#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
   
    cout<<"the top element is :"<<s.top()<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}
