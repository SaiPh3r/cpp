#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("out.dat");

    string words;


    while(in>>words){
        out<<words<<" ";



    }

    return 0;
}

