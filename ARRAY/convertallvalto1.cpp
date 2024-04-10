#include<iostream>
using namespace std;
int main (){
    int i;
    int arr[5]={2 , 4, 5, 6, 7};
    for(int i=0; i<5; i++){
     arr[i]=1;
    }

    //print 
    for (int i=0 ;i<5 ; i++ ){
        cout << arr[i];
    }
    return 0;
}