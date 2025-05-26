// g++ -std=c++11 q1.cpp -o a.out && ./a.out
# include <iostream>
using namespace std; 

int main(){
    int n;
    cout<<"enter the value of n: "<<endl;
    cin>>n;

    double sum = 0;
    for(int i = 1 ; i<=n ; i++){
        if(i%2 == 0){
            sum -= 1/pow(i,i);
        }
        else{
            sum+=1/pow(i,i);
        }
    }
    cout<<"the value is"<<sum<<endl;
    return 0;

}