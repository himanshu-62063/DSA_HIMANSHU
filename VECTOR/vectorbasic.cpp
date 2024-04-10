#include<iostream>
#include<vector>
using namespace std;
int main(){
    //int i;
    
    
    //declare 
   // vector<int> arr;
    //cout<<"vector is declare ";


    //initilise of vector 

    //vector<int>arr(10,20,30);


    //insert

    vector<int> arr;
    arr.push_back(5);
    arr.push_back(6);
    //print 

    for(int i=0; i<arr.size(); i++){
        cout<< arr[i]<<endl;
    }

    //remove 
    arr.pop_back();


    return 0;
}