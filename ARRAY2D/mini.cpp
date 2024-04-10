#include<iostream>
using namespace std;


int getMin(int arr[][3], int cols, int rows){
    int mini=INT_MAX;
    for(int i=0 ; i<rows ; i++){
        for(int j=0; j<cols ; j++){
            if(arr[i][j]<mini){
                mini == arr[i][j];
            }
        }
    }
    return mini;
}


int main(){
    int arr[3][3];
int cols=3 ;
int rows =3;

for(int i=0; i<rows; i++){
    for(int j=0 ; j<cols; j++){
        cin>>arr[i][j];
    }
    cout<< endl;
}
for(int i=0; i<rows; i++){
    for(int j=0 ; j<cols; j++){
        cout<<arr[i][j]<<"";
    }
    cout<< endl;
}

cout<< getMin(arr,cols,rows);

return 0;

}