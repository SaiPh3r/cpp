//g++ -std=c++11 q4-b.cpp -o a.out && ./a.out
#include <iostream>
using namespace std;


int area(int a){
    cout<<"the area of square is: "<<a*a<<endl;
    return 0;

}

int area(int a , char b){
    cout<<"the are of circle is: "<<(3.14)*(a*a)<<endl;
    return 0;
}

int main(){

    area(3);
    area(3,'c');

    return 0;

}