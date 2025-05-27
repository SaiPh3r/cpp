//g++ -std=c++11 virtualFunction.cpp -o a.out && ./a.out
#include <iostream>
using namespace std;


class Base{
    public:
        int base_input;
        virtual void display(){ // virtual function made now when pointer of base class pointing to dericved class will run display of derived class
            cout<<"the value of base_input is: "<<base_input<<endl;
        }

};

class Derived : public Base{
    public:
        int derived_input = 7;
        void display(){
            cout<<"the value of derived_input is: "<<derived_input<<endl;
        }

};

int main(){
    Base obj_base;
    Base *Base_ptr;
    Derived obj_derived;
    Base_ptr = &obj_derived;
    Base_ptr->display();
    return 0;
}