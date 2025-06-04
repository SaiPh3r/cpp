//g++ -std=c++11 q3-a.cpp -o a.out && ./a.out
#include <iostream>
using namespace std;


class ThreeDim{
    int x , y , z;

    public:
        ThreeDim(){
            x = 0;
            y = 0;
            z = 0;
        }

        ThreeDim(int a,int b,int c){
            x = a;
            y = b;
            z = c;

        }

        void out();

};

void ThreeDim::out(){
    cout<<"the value of x,y,z are: "<<x<<y<<z<<endl;
    
}

int main(){
    ThreeDim object(1,2,3);
    object.out();
    return 0;
}