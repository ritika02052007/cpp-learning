//check the grade according to marks

# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    if(n > 80){
        cout<<"A grade"<<endl;
    } else if(n > 60){
        cout<<"B grade"<<endl;
    } else if( n > 40){
        cout<<"C grade"<<endl;
    } else {
        cout<<"D grade"<<endl;
    }
    return 0;
}