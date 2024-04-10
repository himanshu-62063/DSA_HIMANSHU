#include<iostream> 
#include<vector> 
using namespace std;

int lastoccurence(vector<int>v, int target){
    int start=0;
    int end=v.size()-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){
        if (v[mid]==target){
            //store ans
            ans=mid;

            //right search
            start=mid+1;
        }
        else if(target<v[mid]){
            end=mid-1;
        }
        else if(target>v[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}




int main(){

vector<int>v{1,2,3,3,3,3,3,3,3};
int target = 3;
int indexoflast=lastoccurence(v, target);
cout<<"last occurence is"<<indexoflast<<endl;

    return 0;
}