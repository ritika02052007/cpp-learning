// write a function to check even or odd

#include<iostream>
using namespace std;
void even_odd(int n){
    if(n%2==0){
        cout<<"it is even number"<<endl;
    }
    else{
        cout<<"it is odd number"<<endl;
    }
}

int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    even_odd(n);
    return 0;
}