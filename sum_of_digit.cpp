#include <iostream>
using namespace std;


int sum(int a) {
    int sum = 0, b, c;
    while(a>0) {
        b = a %10;
        c = a/10;
        sum += b;
        a = c;
    }
    return sum;
}


int main() {
    cout<<"Enter a number: "<<endl;
    int a;
    cin>>a;
    cout<<"Sum of digits of the number is "<<sum(a)<<endl;
    return 0;
}