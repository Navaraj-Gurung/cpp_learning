#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Delete(int arr[], int &size, int index) {
    for(int i=index;i<size-1;i++) {
        arr[i] = arr[i+2];
    }
    size-=2;
}



int main() {
    int arr[] = {1,3,2,3,4,8,8,9,23};
    int size=sizeof(arr)/sizeof(int);
    //This sorts the arr[].
        for(int i=0;i<size;i++) {
            for(int j=i;j<size;j++){
                if(arr[j]<arr[i]){
                    swap(arr[i],arr[j]);
                }
            }
        }
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Find n Delete arr[].
        for(int i=0;i<size;i++) {
            if(arr[i]==arr[i+1]){
                Delete(arr,size,i);
                i--;
            }
        }
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}