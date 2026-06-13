// basic of do while loop

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int i =1;
    do{
        cout<<n*i<<endl;
        i++;
    } while(i<=10);

    return 0;
}