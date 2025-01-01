#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> ProductExceptSelf(vector<int> &nums) {
    int size=nums.size();
    vector<int> ans(size,1);
    for(int i=1;i<size;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    int suffix = 1;
    for(int i=size-2;i>=0;i--) {
        suffix*=nums[i+1];
        ans[i]*=suffix;
    }
    return ans;
}


int main() {
    vector<int> nums = {1,4,5,2,4};
    vector<int> ans = ProductExceptSelf(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}