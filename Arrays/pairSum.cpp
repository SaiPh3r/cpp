//bruteforce method to find pai

#include <iostream>
using namespace std;
# include <vector>

int main(){
    int target = 13;
    int n = 4;
    vector<int> ans = {};
    int arr[4] = {2,7,11,15};
    for(int i = 0; i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
    }
    for(int val:ans){
        cout<<val<<" ";
        
    }
    cout<<endl;

    


    return 0;
}

