#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int>arr){
    int ans=0;
    for(int i=0; i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}




int main(){

int n ;
cout <<"enter the size of an array"<<endl;
cin >> n;

vector<int>arr(n);
cout <<"enter the element"<<endl;
for(int i =0; i<arr.size(); i++){
    cin>>arr[i];

}
 int uniqueElement = findUnique(arr);
 cout<<"unique element is :"<<uniqueElement;




    return 0;
}