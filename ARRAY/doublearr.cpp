#include<iostream>
using namespace std;
int main (){
       
       int arr[800];
       int n;

       cout<<"how many no yuu want to double";
       cin>>n;
        cout<<"enter number ";
       for(int i=0;i<n;i++){
         cin>>arr[i];
       }

       
    //double 

       for(int i=0; i<n; i++){
        cout<<"double is";
        cout<<2*arr[i]<<endl;
       }





    return 0;
}