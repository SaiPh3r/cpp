// array of objects using pointers
// g++ -std=c++11 arrayofobjectsusingpointers.cpp -o a.out && ./a.out
# include <iostream>
using namespace std;

class Shop{
    int id;
    float price;

    public:
        void setData(int a , int b){
            id = a;
            price = b;
        }
        void getData(){
            cout<<"the id of the product is: "<<id<<endl;
            cout<<"the price is: "<<price<<endl;

        }

};
 
int main(){
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p , i;
    float q;
    for( i = 0 ; i<size ; i++){
        cout <<"Enter id and price od item: "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }

    for(i = 0 ; i<size ; i++){
        cout<<"item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }


    return 0;
}