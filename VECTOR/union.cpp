#include<iostream>
#include<vector>
using namespace std;
int main(){

int arr[]={1,2,3,4,5,6};
int brr[]={7,8,9};
int sizea=6;
int sizeb=3;

//creating ans vector 
 vector<int>ans;

 //put all the arr element in ans array
for(int i=0; i<sizea; i++){
    ans.push_back(arr[i]);

}

//put all element in brr in ans array

for(int i=0 ; i<sizeb ; i++){

    ans.push_back(brr[i]);
}

//print ans array
cout << "uniun of an array is:"<<endl;

for(int i=0 ; i<ans.size(); i++){
    cout<<ans[i]<<endl;
}



    return 0;
}