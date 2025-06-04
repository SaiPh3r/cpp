// g++ -std=c++11 q6-c.cpp -o a.out && ./a.out
#include <iostream>
using namespace std;

void upperTriangle(int arr[10][10],int n){
    for(int i = 0;i<n;i++){
        for (int j = 0;j<i;j++){
            arr[i][j] = 0;
        }
    }

    for(int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int arr[10][10];
    int n;
    cout<<"enter the order of the matrix";
    cin>>n;
    cout<<"enter the elements of the matrix: ";
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    upperTriangle(arr,n);


    return 0;
}