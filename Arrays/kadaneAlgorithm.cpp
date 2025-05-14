//solved ques number 53 MAX Subbaray in leetcode
#include <iostream>
using namespace std;
#include <vector>


int maxSum(vector<int>& nums,int size){
    int currentSum = 0;
    int maximumSum = INT_MIN;
    for (int value: nums){
        currentSum+=value;
        maximumSum = max(currentSum,maximumSum);
        if(currentSum<0){
            currentSum = 0;
        }


    }
    return maximumSum;
}






int main(){
    vector<int> nums = {1,2,-5,3,4};
    int size = nums.size();
    cout<<maxSum( nums,size);
    



    return 0;
}
