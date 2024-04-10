#include<iostream>
using namespace std;

bool find(int arr[] , int size , int key ){
    for (int i=0; i<size;i++){
        if(arr[i]==key)
        return true ;
    }
    return false;
}



int main(){

    int arr[]={2,4,6,8,9,1,0};
    int size =7;
    int key;

    cout <<"enter the value of key";
    cin>>key;

    if(find(arr,size ,key)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found ";
    }

    return 0;
}