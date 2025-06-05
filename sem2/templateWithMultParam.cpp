// g++ -std=c++11 templateWithMultParam.cpp -o a.out && ./a.out
#include <iostream>
using namespace std;

template <class T1 , class T2>
class Data{
    public:
        T1 data1;
        T2 data2;

        Data(T1 a , T2 b){
            data1 = a;
            data2 = b;

        }
        void displayData(){
            cout<<"the value of data1 and data2 is:  "<<data1<<" , "<<data2<<endl;
        }



};


int main(){

    Data <int , char> s1(3,'S');
    s1.displayData();


    return 0;
}