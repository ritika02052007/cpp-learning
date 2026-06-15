// linear search in array

#include<iostream>
using namespace std;
int main(){
    int arr[7] ={4,8,12,16,20,24,28};
    int n;
    cout<<"enter the element which you want to search :";
    cin>>n;
    for(int i =0; i<7; i++){
        if(arr[i] == n){
            cout<<"element is found at index :"<<i<<endl;
            break;
        }
        if(i == 6){
            cout<<"elelment is not found";
        }
    }

    return 0;
}