#include <iostream>
#include <vector>
#include <string>
using namespace std;

 bool isAlphaNumeric(char c) {
    return((c>='0' && c<='9')||(c>='a' && c<='z'))|| (c >= 'A' && c <= 'Z');
 }

bool Palindrome(string s) {
    
    int st=0,end=s.length()-1;
    
    while(st<end) {
        while(st < end && !isAlphaNumeric(s[st])) {
            st++;
        }
        while(st < end && !isAlphaNumeric(s[end])) {
            end--;
        }
        if(st<end){
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            } 
        st++;
        end--;
        }
    }
    return true;
}


int main() {
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    if(Palindrome(s)) {
        cout<<"Is a Palindrome"<<endl;
    }
    else {
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}