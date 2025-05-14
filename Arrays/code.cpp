#include <iostream>
using namespace std;

int main(){
    int marks[7] = {3,7,5,9,4,-78,-10};
    int size  = sizeof(marks)/sizeof(int);
    int smallest = INT_MAX; // this means plus infinity
    int largest = INT_MIN;  //this means minus infinity
    for(int i = 0; i<size;i++){
        if(marks[i]<smallest){
            smallest = marks[i];
        }
        if(marks[i]>largest){
            largest = marks[i];
        }

    }
    cout<<smallest<<endl;
    cout<<largest<<endl;

    return 0;
}