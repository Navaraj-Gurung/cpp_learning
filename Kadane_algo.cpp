#include <iostream>
#include <vector>
using namespace std;

int Kadane_algo(vector<int> &nums) {
    int MaxSA = INT_MIN; 
    int sum = 0; 
    int size = nums.size();
    
    for(int i = 0; i < size; i++) {
        sum += nums[i]; 
        MaxSA = max(MaxSA, sum); 
        
        if(sum < 0) { 
            sum = 0;
        }
        
    }
    
}
     

int main() {
    vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    cout << Kadane_algo(a) << endl; // Expected output: 23
    return 0;
}