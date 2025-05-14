//pair sum using 2pointer  better thab brutforce
#include <iostream>
using namespace std;
#include <vector>



vector<int> pairSum(vector<int>& nums , int n,int target){
    vector<int> ans;
    int i = 0;
    int j = n-1;
    while(i<j){
        if(nums[i]+nums[j]>target){
            j--;
        }
        else if (nums[i]+nums[j]<target)
        {
           i++; 
            
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

        


    }
    return ans;
    

}


int main(){
    vector<int> nums = {2,7,11,15};
    int n = nums.size();
    int target = 9;
    vector<int> result = pairSum(nums,n,target);
    for(int val:result){
        cout<<val<<" "<<endl;
    }

    return 0;
}