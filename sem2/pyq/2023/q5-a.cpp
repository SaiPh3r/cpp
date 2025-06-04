//g++ -std=c++11 q5-a.cpp -o a.out && ./a.out
#include <iostream>
using namespace std;


class Complex {
    protected:
        int a,b;
    public:
        Complex(){
            cout<<"this is a default constructor"<<endl;
        }
        Complex(int x,int y){
            a = x;
            b = y;
            cout<<"the complex number is : "<<a<<"+"<<b<<"i"<<endl;
        }

        void add(Complex c1,Complex c2){
            a = c1.a + c2.a;
            b = c1.b + c2.b;
            cout<<"the sum is: "<<a<<"+"<<"I"<<b<<endl;

        };
};

    




int main(){

    Complex one(3,4);
    Complex two(4,3);
    Complex result;
    result.add(one, two);

    return 0;
}