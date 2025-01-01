#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool isValid(vector<int> books, int m, int n, int mid) {
    int students = 1, pages = 0;
    for (int i=0;i<n;i++) {
        if(books[i]>mid) return false;
        if(pages + books[i]<=mid) {
            pages+=books[i];
        }
        else {
            students ++;
            pages = books[i];
        }
    }
    return students>m?false:true;
}

int BookAllocation(vector<int> books,int n, int m) {
    int sum = 0;
    for(int i=0; i<n;i++) {
        sum += books[i];
    }
    int st=0, end = sum, ans = -1;

    while(st<=end) {
        int mid = st+ (end-st)/2;

        if(isValid(books,m,n,mid)) {
            ans = mid;
            end = mid-1;
        }
        else {
            st = mid+1;
        }
    }
    return ans;
}

int main() {
    vector<int> books = {2,1,3,4};
    cout<<BookAllocation(books,4,4)<<endl;
    
   
    return 0;
    

}