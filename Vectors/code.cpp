#include <iostream>
using namespace std;

int main(){

    vector<int> vec  ={1,2,3,4};
    vec.push_back(999);
    for(int i: vec){
        cout<<i<<endl;
    }
    cout << vec.size()<<endl;
    vec.push_back(5);
    vec.push_back(10);
    cout<<vec.size();



    return 0;
}