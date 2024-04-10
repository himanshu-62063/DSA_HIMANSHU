#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
int start=0; 
int end=size-1;
int mid=(start+end)/2;
while(start<=end){
    if(arr[mid]==target){
        return mid;
    }
    else if(target<arr[mid]){
        end=mid-1;
    }
    else {
        start=mid+1;
    }
    mid=(start+end)/2;
}
return -1;


 }



int main(){
    int arr[]={2,4,6,8,18,12,16};
    int size=7;
    int target =2;
    int indexoftarget=binarySearch(arr,size,target);
    if(indexoftarget==-1){
        cout<<"target not found"<<endl;
    }
    else{
        cout<<"target is found"<<endl;
    }

    return 0;
}