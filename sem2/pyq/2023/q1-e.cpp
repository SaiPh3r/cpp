// g++ -std=c++11 q1-e.cpp -o a.out && ./a.out
#include <iostream>
using namespace std;


void swap(int *a , int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp ;
}

int main(){

    int x =3,y = 4;
    swap(&x,&y);
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}
