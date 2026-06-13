// find the greatest among three number 

#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"enter the first number :"<<endl;
    cin>>a;
    cout<<"enter the second number :"<<endl;
    cin>>b;
    cout<<"enter the third number :"<<endl;
    cin>>c;
    if(a >= b && a >= c){
        cout<<"The is greatest number :"<<a<<endl;
    } else if ( b >= c && b >= a){
        cout<<"The greatest number is :"<<b;
    } else {
        cout<<"The greatese number is :"<<c;
    }
    return 0;
}