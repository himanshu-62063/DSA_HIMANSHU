#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>arr{1,2,3,5,4};
    vector<int>brr{3,5,8,9};
    vector<int>ans;

    for(int i=0; i<arr.size();i++){
        int element = arr[i];
        for(int j=0;j<brr.size();j++){
            if (element==brr[j]){
                ans.push_back(element);
            }
        }

    }
//print ans array
for(auto value :ans)
{ 
    cout <<value<<endl;
}


    return 0;
}