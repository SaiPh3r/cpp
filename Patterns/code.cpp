#include <iostream>
using namespace std;
int main(){
    // square pattern with numbers
    int n = 4;
    for(int i=1;i<=n;i++){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }


    //sqaure pattern with *
    int s = 4;
    for(int j = 1; j<=s;j++){
        for(int j = 1; j<=s;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    //sqaure pattern with a,b,c,d

    int l = 4;
    for(int k = 1;k<=l;k++){
        char ch = 'a';
        for(int k = 1;k<=l;k++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
//    sqaure pattern with 1,2,3
    int r = 3;
    int q = 1;
    for(int m = 1;m<=r;m++){
        for (int m=1; m<=r ; m++ ){
            cout<<q<<" ";
            q++;
            
        }
        cout<<endl;
    }


    //triangle pattern
    int t = 4;
    for(int i = 0;i<t;i++){
        for(int j = 0;j<i+1;j++){
            cout<< "*" <<" ";
        }
        cout<<endl;
    }




    return 0;
}