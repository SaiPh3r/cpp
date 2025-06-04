//g++ -std=c++11 q6-a.cpp -o a.out && ./a.out
#include <iostream>
using namespace std;


class Polygon{
    protected:
        int area;
    public:
         virtual void calculate_area() = 0;

         void  show_area(){
            cout<<"the area is:"<<area<<endl;


         }

};

class Rectange : public Polygon{
    public:
        int length , breadth;
        Rectange(int l,int b){
            length = l;
            breadth = b;
        }
    void calculate_area(){

        area = length*breadth;
    }
    void show_area(){
        cout<<"the are of rectange is: "<<area;
    }  

};

int main(){
    Polygon *base_ptr;
    Rectange r(3,4);
    base_ptr = &r;
    base_ptr->calculate_area();
    base_ptr->show_area();
    

    return 0;
}