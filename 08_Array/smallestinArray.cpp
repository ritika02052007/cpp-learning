// find the smallest element in array

#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[6] = {3,6,9,12,15,18};
    int smallest = INT_MAX;
    for(int i =0; i<6;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<<"The smallest element is :"<<smallest<<endl;
    return 0;
}