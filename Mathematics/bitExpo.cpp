//used to find x^n
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    double base = 2;
    long  exponent = n;
    double ans = 1;

    if(exponent<0){
        base = 1/base;
        exponent = -exponent;

    }

    while(exponent>0){
        if(exponent%2==1){
            ans*=base;
            
        }
        base*=base;
        exponent/=2;

    }
    cout<<ans<<endl;





    return 0;
}