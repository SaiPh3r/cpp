// g++ -std=c++11 singleInheritance.cpp && ./a.out
#include <iostream>
using namespace std;


class base{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
        int getdata2();
        

};
void base :: setData(){
    data1 = 10;
    data2 = 20;
}

int base :: getData1(){
    return data1;
}

int base :: getdata2(){
    return data2;
}

class derived : public base{
    int data3;
    public:
        
        void proccess();
        void display();

};
void derived :: proccess(){
    data3 = data2 * getData1();
}

void  derived:: display(){
    cout<<getData1()<<endl;
    cout<<data2<<endl;
    cout<<data3<<endl;

}



int main(){
    derived sai;
    sai.setData();
    sai.getData1();
    sai.getdata2();
    sai.proccess();
    sai.display();

    return 0;
    

}