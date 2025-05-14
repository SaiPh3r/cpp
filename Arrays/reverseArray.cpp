#include <iostream>
using namespace std;

//uisng 2 pointer approach ,,,, it is imp as will be used afterwards also.


void  reverse(int arr[],int sz){
    int start = 0;
    int end = sz - 1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end --;

    }
    


}


int main(){
    int array[] = {1,2,3,4,5,6,7};
    int size = sizeof(array)/sizeof(int);

    reverse(array,size);

    for(int i = 0; i<size;i++){
        cout << array[i]<<" ";
    }
    cout<<endl;
    




    return 0;
}