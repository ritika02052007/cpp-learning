// sum of digit in a given number 

#include<iostream>
using namespace std;

int sum_of_digit(int n){
    int sum = 0,lastDigit = 0;
    while(n>0){
        lastDigit = n%10;
        sum+=lastDigit;
        n/=10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int sum = sum_of_digit(n);
    cout<<"The sum :"<<sum;
    return 0;
}