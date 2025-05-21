// g++ -std=c++11 pointers.cpp -o a.out && ./a.out
// pointer is a data type used to hold address of other data types
//   & -> address operator
//   *-> derefence operator
# include <iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;

    public:
        void getData(){
            cout<<"the real part is "<<real<<endl;
            cout<<"the imaginary part is "<<imaginary<<endl;
        }

        void setData(int a , int b){
            real = a;
            imaginary = b;


        }
};


int add(int a , int b){
    cout<<a + b<<endl;
    return a+b;
}

int subtract(int a , int b ){
    cout<<a-b<<endl;
    return a-b;
}


int main(){

    int a = 3;
    int *b = &a;
    cout<<b<<endl;
    cout<<"the value at b is "<<*b<<endl;
    cout<<"the address of a is"<<&a<<endl;

    //pointer - pointer
    int **c = &b;
    cout<<"the address of b is : "<<c<<endl;
    cout<<"the address of b is:  "<<&b<<endl;

    //pointer and array

    int marks[4] = {3,34,9,90};
    int *p = marks;
    cout<<"value of array marks index 0"<<*p<<endl;
    p++;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;

    //pointer to function

    int (*func_ptr)(int, int);

    func_ptr = &add;
    func_ptr(1,2);

    func_ptr = &subtract;
    func_ptr(3,1);

    //pointers to objects

    Complex c1;
    Complex *ptr = & c1; // this is the syntax for pointer to object
    (*ptr).setData(2,4);
    (*ptr).getData();

    Complex *ptrr = new Complex;
    (*ptrr).setData(3,5);
    (*ptrr).getData();



    //or we can use arrow
    ptrr->setData(6,7);
    ptrr->getData();



    return 0;
} 