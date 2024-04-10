#include<iostream>
using namespace std;

void findKey( int arr[][3], int cols , int rows, int keys ){
    for(int i=0 ; i<rows; i++ ){
        for(int j=0 ; j<cols; j++){
            if (arr[i][j]==keys)
            return true;
        }
    }
    return false;

}

int main(){

int arr[3][3];
int rows =3;
int cols=3;
int keys =1;

for(int i=0 ; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin >>arr[i][j];
    }
    cout << endl;
}
for(int i=0 ; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout<<arr[i][j]<<" ";
    }
    cout << endl;
}

if(findKey(arr, 3, 3, keys)){
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}







    return 0;
}