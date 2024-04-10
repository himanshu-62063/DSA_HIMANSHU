#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,7,8,9,0};
    int size =7;
    int mini = INT_MAX;

    for (int i=0 ; i<size; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    cout <<"mini no is "<<mini <<endl ;

    return 0;
}