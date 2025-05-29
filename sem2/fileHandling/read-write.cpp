// g++ -std=c++11 read-write.cpp -o a.out && ./a.out
#include <iostream>
#include <fstream>
using namespace std;
//usefull classes for working with files:
// 1. fstreambase
// 2. ifstream -> derived from fstreambase
// 3. ofstream -> derived from fstreambase

//in order to work with files we need to open it first , there are 2 ways to open a file:
// 1. using constructor
// 2. using member functions


int main(){

    //opening files and writing in it
    string st = "sai anand";
    ofstream write("sampleb.txt");
    write<<st;

    //opening files using constructor and reading it 
    string s;
    ifstream read("sample.txt");
    getline(read,s);
    cout<<s;


    return 0;
}