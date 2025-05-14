//g++ -std=c++11 multiple.cpp -o a.out && ./a.out
# include <iostream>
using namespace std;

class base1{
    protected:
        int base1int;
    public:
        void set_data1(int a){
            base1int = a;
        }

};

class base2{
    protected:
        int base2int;
    public:
        void set_data2(int a){
            base2int = a;

        }
};

class derived : public base1 , public base2{
    public:
        void show(){
            cout<<"the value of base one is : "<<base1int<<endl;
            cout<<"the value of base twoo is : "<<base2int<<endl;
            cout<<"the sum of base is "<<base1int+base2int<<endl;
        }

};





int main(){
    derived sai;
    sai.set_data1(7);
    sai.set_data2(16);
    sai.show();


    return 0;
}