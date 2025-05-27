//g++ -std=c++11 pointersToDerivedClass.cpp -o a.out && ./a.out
# include <iostream>
using namespace std;

class BASE{
    
    public:
        int var_base;
        void display(){
            cout<<"the value of var_base is: "<<var_base<<endl;
        }
};

class Desrived : public BASE{
    public:
        int var_derived;
        void display(){
            cout<<"the value of var_base is: "<<var_base<<endl;
            cout<<"the value of var_derived is: "<<var_derived<<endl;

        }
};


int main(){
    BASE *base_pointer;
    Desrived *ptr;
    BASE obj_base;
    Desrived obj_derived;
    ptr = &obj_derived;
    base_pointer = &obj_derived;

    (*base_pointer).var_base = 5;
    (*base_pointer).display();

    ptr->var_derived = 7;
    ptr->display();


    return 0;
}