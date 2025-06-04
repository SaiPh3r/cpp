// g++ -std=c++11 q1-c.cpp -o a.out && ./a.out
#include <iostream>
using namespace std;

class ASCCII{
    public:
        char ch;
        int ans;
        void getData(){
            cout<<"Enter the character: "<<endl;
            cin>>ch;

        }
        void setData(){
            ans = int(ch);
            cout<<"the asc value of character enterd is :  "<<ans<<endl;
            
        }


};

int main(){
    ASCCII a;
    a.getData();
    a.setData();

    return 0;
}