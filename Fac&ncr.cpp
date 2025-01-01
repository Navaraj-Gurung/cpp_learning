#include <iostream>
using namespace std;

int factorial(int a) {
    if(a==0) {
        return 1;
    }
    if(a==1) {
        return 1;
    }
    if(a>1) {
        return a * factorial(a-1);
    }
    return 0;
}

int Combination(int n, int r) {
    
    if(n>r) {
        int result = factorial(n)/(factorial(n-r) * factorial(r));
        return result;
    }
    if (r>n) {
        cout<<"Invalid!, try again."<<endl;
        return 0;
    }
    if (r==n) {
        return 1;
    }
    return 0;
}


int main() {
    int n, r;
    cout<<"Enter the number of objects: "<<endl;
    cin>>n;
    cout<<"Enter the number of samples: "<<endl;
    cin>>r;
    cout<<"The "<<n<<"C"<<r<<" value would be: "<<Combination(n,r);
    cout<<endl;

    return 0;
}                                                                                                                               