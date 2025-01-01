#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int Answer(vector<int> nums, int target, int n) {
    int s = 0;
    int e = n-1;
    int i = (s+e)/2;
    while(s<=e) {
        if (nums[i]==target) return nums[i];
        if(nums[i]<target) {
            s = i;
            i = (s+e)/2;
        }
        if(nums[i]>target) {
            e = i;
            i = (s+e)/2;
        }
        else{
            return -1;
        }
    }
    return 1;
    
}

int RecBinarySearch(vector<int> nums,int target, int st, int end) {
    if(st<=end) {
        int mid = (st+end)/2;
        if(target<nums[mid]) {
            return RecBinarySearch(nums,target,st,mid-1);
        }
        else if(target>nums[mid]) {
            return RecBinarySearch(nums,target,mid+1,end);
        }
        else {
            return mid;
        }
    }
    return -1;
}


int main() {
    vector<int> nums = {23,45,34,37,77,1,3,2,56,8,2,9};
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int target;
    cout<<"Enter the target number: ";
    cin>>target;
    cout<<Answer(nums,target,n)<<endl;
    cout<<RecBinarySearch(nums,target,0,n-1)<<endl;
    return 0;
}