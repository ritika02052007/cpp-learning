// find the character is lowercase or uppercase

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character :";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"it is lowercase letter "<<endl;
    } else{
        cout<<"it is uppercase letter "<<endl;
    }
    return 0;
}