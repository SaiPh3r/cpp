// pointer is a data type used to hold address of other data types
//   & -> address operator
//   *-> derefence operator
# include <iostream>
using namespace std;

int main(){

    int a = 3;
    int *b = &a;
    cout<<b<<endl;
    cout<<"the value at b is "<<*b<<endl;

    //pointer - pointer
    int **c = &b;
    cout<<"the address of b is : "<<c<<endl;
    cout<<"the address of b is:  "<<&b<<endl;


    return 0;
} 