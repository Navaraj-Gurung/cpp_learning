#include <iostream>
#include <vector>
using namespace std;

void Dectobin(int n) {
    vector<int> ans;
    while(n>0){
        int rem=n%2;
    ans.push_back(rem);
    n/=2;
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i];
    }
}

int main(){
    int n = 8;
    Dectobin(n);
    cout<<endl;

    return 0;
}
