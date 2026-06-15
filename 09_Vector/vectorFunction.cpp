// use the vector function

#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<char>vec = {'a','e','i','o'};
    cout<<vec.size()<<endl;
    vec.push_back('u');
    for(char i : vec){
        cout<<i<<" ";
    }
      vec.pop_back();
      cout<<endl;
      cout<<vec.front()<<endl;
      cout<<vec.back()<<endl;
      cout<<vec.at(0)<<endl;
      return 0;

}