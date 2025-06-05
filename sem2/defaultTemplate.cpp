// g++ -std=c++11 defaultTemplate.cpp -o a.out && ./a.out
#include <iostream>
using namespace std;

template <class T1 = int , class T2 = float , class T3 = char > // this is an example of default param in template
class Default{
    public:
    T1 a;
    T2 b;
    T3 c;
    Default(T1 x , T2 y , T3 z){
        a = x;
        b = y;
        c = z;

    }
    void display(){
        cout<<"the value of a and b and c is: "<<a<<" , "<<b<<" , "<<c<<endl;
    }
};


int main(){
    Default <int , float , float > Sai(3,4.7,2.3);
    Sai.display();


    return 0;
}