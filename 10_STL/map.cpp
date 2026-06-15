#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>student;

    // insert data
    student[101] = "Ritika";
    student[102] = "Riya";
    student[103] = "Radha";

    // print map
    for(auto x : student){
        cout<<x.first<<"->"<<x.second<<endl;
    }
    return 0;
}