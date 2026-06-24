#include<iostream>
using namespace std;

int main(){

    int arr[5];
    int sum=0;

    cout<<"Enter 5 numbers:"<<endl;

    for(int i=0; i<5; i++){
    cin>>arr[i];
    }

    for(int i=0; i<5; i++){
        sum=sum+arr[i];
    }
    cout<<"The sum of 5 numbers is:"<<sum<<endl;

    return 0;
}