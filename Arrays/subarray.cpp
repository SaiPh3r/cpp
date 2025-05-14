#include <iostream>
using namespace std;

int main(){

    int arr[5] = {0,1,2,3,4};
    int n = 5;
    for(int start = 0; start<n;start++){
        for (int end = start; end<n;end++){
            for(int i = start; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    
    //max sum(bruteforce)//

    int maxSum = INT_MIN;

    for(int start = 0; start<n;start++){
        int sum = 0;
        
        for (int end = start;end<n;end++){
            sum += arr[end];
            maxSum = max(sum,maxSum);
        }

    }
    cout<<maxSum<<endl;
    


    return 0;

    //solved ques number 53 MAX Subbaray in leetcode uind kadane algorithim

                                        



    
}

