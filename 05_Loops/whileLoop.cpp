// basic of while loop

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int i=1;
    while(i<=10){
        cout<<n*i<<endl;
        i++;
    }
    return 0;
}