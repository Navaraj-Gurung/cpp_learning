#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int PeakIndex(vector<int> nums) {
    int n = nums.size();
    int st=1,end=n-2;
    while(st<=end) {
        int mid = st + (end-st)/2;

        
        if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]) {
            return mid;
        }
        else if(nums[mid-1]<nums[mid]) {
            st=mid+1;
        }
        else if(nums[mid-1]>nums[mid]) {
            end=mid-1;
        }
    }
    return -1;
}
    

int main() {
    vector<int> nums = {1,3,5,7,8,9,6,3,2};
    cout<<PeakIndex(nums)<<endl;
    
    
    return 0;
}