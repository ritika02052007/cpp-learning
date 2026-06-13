// find the minimum of two number

#include<iostream>
using namespace std;

int min_two(int a, int b){
    if(a<b){
        return a;
    } else{
        return b;
    }
}

int main(){
    int x;
    cout<<"enter the first number :";
    cin>>x;
    int y;
    cout<<"enter the second number :";
    cin>>y;
    int min = min_two(x,y);
    cout<<"The minimum number is :"<<min;
    return 0;
}