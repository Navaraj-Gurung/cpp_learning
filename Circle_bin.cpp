#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int Func(vector<int> nums, int target) {
    int st=0;
    int end=nums.size()-1;
    while(st<=end){
        int mid=(st+end)/2;
        if((nums[st]<=target) && (target<=nums[mid])){
            end=mid;
            if(nums[mid]<target) {
                st = mid+1;
            }
            else if(nums[mid]>target) {
                end = mid-1;
            }
            else return mid;
        } 
        else if((nums[mid]<=target) && (target<=nums[end])){
            st=mid;
            if(nums[mid]<target) {
                st = mid+1;
            }
            else if(nums[mid]>target) {
                end = mid-1;
            }
            else return mid;
        }            
        else if(nums[st]>nums[mid]){
            end=mid;
        }
        else if(nums[mid]>nums[end]){
            st=mid;
        }    
        
    }
    return -1;
}

int main() {
    vector<int> nums = {11,12,13,14,15,0,1,2,3,4,5,6,7,8,9,10};
    int target;
    cout<<"Enter the target number: ";
    cin>>target;
    cout<<Func(nums,target)<<endl;
    return 0;
}