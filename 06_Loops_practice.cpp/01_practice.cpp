// To check the number is palindrome or not

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    int palin = n;
    int rev = 0;
    while(n>0){
        int lastDigit = n%10;
        rev = rev*10+lastDigit;
        n/=10;
    }
    if(rev == palin){
        cout<<"it is palindrome number";
    }
    else{
        cout<<"it is not a palindrome number";
    }
    return 0;
}