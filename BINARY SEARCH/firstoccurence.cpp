#include<iostream>
#include<vector>
using namespace std;

int firstoccurence(vector<int>v , int target){
    int s=0 ;
     int e=v.size()-1;
     int mid=(s+e)/2;
     int ans=-1;
     while(s<=e){
        if(v[mid]==target){
            ans=mid;
            e=mid-1;
            //ans store kro or fir left me check kro 

        }

        //same binary search apply
        
        else if(target>v[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;

     }
     return ans;
}



int main(){
    vector<int>v{1,3,4,4,4,4,6,7};
    int target=4;
    int indexoffirstocc=firstoccurence(v,target);
    cout<<"ans is"<<indexoffirstocc<<endl;
    return 0;
}