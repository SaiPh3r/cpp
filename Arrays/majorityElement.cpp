//q169 leetcode for moore voting algo
//this is done by bruteforce rn
#include <iostream>
using namespace std;
#include <vector>

int main(){
    int frequency = 0;
    vector<int> nums = {1,2,3,4,2,2,2,2,2};
    int n = nums.size();
    for(int val: nums){
        frequency  = 0;
        
        for(int el:nums){
            if(el == val){
                frequency++;
            }
        }
        if(frequency>n/2){
            cout<<val<<endl;
            return 0;
        }


    }

    
}

