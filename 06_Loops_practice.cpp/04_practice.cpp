// find the number of digit in the given number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    int count = 0;
    while(n>0){
        count+=1;
        n/=10;
    }
    cout<<count<<endl;
    return 0;
}