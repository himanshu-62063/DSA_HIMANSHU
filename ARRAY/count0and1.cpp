#include<iostream>
using namespace std;
int main(){

int arr[]={0,1,1,0,0,1,0,1,0,1,0,1};
int size=12;
int countZero =0;
int countOne =0;

for (int i=0; i<size;i++){

    if(arr[i]==0){
        countZero++;
    }
    if(arr[i]==1){
        countOne++;
    }

}
cout<<"total o is:"<<countZero<<endl;
cout <<"total 1 is :"<<countOne<<endl;









    return 0;
}