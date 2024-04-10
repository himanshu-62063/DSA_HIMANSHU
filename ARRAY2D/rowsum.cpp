#include<iostream>
using namespace std;



void printRowSum(int arr[][3],int cols,int rows){
    for(int i=0 ; i<rows; i++){
        int sum=0;
        for(int j=0 ; j<cols; j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<sum <<endl;
    }
}
int main(){

//input 
cout<<"taking input "<<endl;

int arr[3][3];
int rows=3;
int cols=3;

for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>arr[i][j];
    }
    cout<<endl;
}

//print 
for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
 printRowSum(arr,rows,cols);



    return 0;
}