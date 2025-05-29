//g++ -std=c++11 exceptionHandling.cpp -o a.out && ./a.out
#include <iostream>
using namespace std;


int main(){

    string word = "sai";

    try
    {
        cout<<word.at(5)<<endl;
    }
    catch(out_of_range & e)
    {
        cout<<"error occured!"<<endl;
            
    }
    

    return 0;
}