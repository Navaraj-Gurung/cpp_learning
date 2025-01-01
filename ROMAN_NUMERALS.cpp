#include <iostream>
#include <string>
#include <map>

using namespace std;

int romanToInt(string s) {
        map<char,int> val;
        val['I']=1;
        val['V']=5;
        val['X']=10;
        val['L']=50;
        val['C']=100;
        val['D']=500;
        val['M']=1000;
        int ans=0;
        for(int i=0;i<s.size();i++) {
            if(i+1<s.size() && val[s[i]]<val[s[i+1]]) {
                ans+=val[s[i+1]]-val[s[i]];
                i++;
            }
            else {
                ans+=val[s[i]];
            }
        }
        return ans;
    }



int main() {
    string s;
    cout<<"Enter a roman number: "<<endl;
    cin>>s;
    cout<<romanToInt(s)<<endl;
    return 0;
}
