#include<iostream>
using namespace std;
int main(){

int arr[]={1,4,6,8,9,12,35,5};
int size =8;
int maxi =INT_MIN;

for (int i =0 ; i<size ; i++)
{
    if(arr[i]>maxi)
    {
        maxi=arr[i];
    }
}
cout <<"max no is "<<maxi <<endl;
 

    return 0;
}