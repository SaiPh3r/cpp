// g++ -std=c++11 q1.cpp -o a.out && ./a.out

//q1(a)
#include <iostream>
using namespace std;

inline float mult(int x,int y){
    return x*y;
}

int main(){

    int a = 2, b = 5;
    cout<<mult(a,b)<<endl;


    return 0;
}



