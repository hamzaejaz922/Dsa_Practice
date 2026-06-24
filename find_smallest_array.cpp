#include<iostream>
using namespace std;

int main() {

    int arr[5];
    int min;
    cout<<"Enter 5 numbers:"<<endl;

    for(int i=0; i<5; i++) {
        cin>>arr[i];
    }

    min=arr[0];

    for(int i=1; i<5; i++) {
        if(arr[i]<min) {
            min=arr[i];
        }
    }
    cout<<"The smallest number in the array is:"<<min<<endl;

    return 0;
}