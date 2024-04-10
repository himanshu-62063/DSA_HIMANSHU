#include<iostream>
using namespace std;
int main(){
    int i;
    int arr[5];
    cout <<"enter value in an array";
    for(i=0; i<6; i++){
        cin>>arr[i];
    }
    //print all value 
    cout<<"value is:";
    for(i=0;i<6;i++){
        cout<<arr[i];

    }
    return 0;
}