// sum of n natural number

#include<iostream>
using namespace std;
int Print_sum(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int sum = Print_sum(n);
    cout<<"The sum of n natural number is :"<<sum;
    return 0;
}