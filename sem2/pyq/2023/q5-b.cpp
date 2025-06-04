//g++ -std=c++11 q5-b.cpp -o a.out && ./a.out
#include <iostream>
using namespace std;



void check(int arr1[5] ,int arr2[5] ){
    for(int i=0;i<5;i++){
        if(arr1[i]!=arr2[i]){
            cout<<"false";
            return;

        }

    }
    cout<<"true";


}


int main(){
    int a[5] = {1,2,3,4,5};
    int b[5]= {1,2,3,4,5};
    check(a,b);
    return 0;
}