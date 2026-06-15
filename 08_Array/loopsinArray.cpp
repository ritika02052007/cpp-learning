// apply the loop on the array

#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,8,10,12,14};
    int size = sizeof(arr)/sizeof(int);
    for(int i= 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}