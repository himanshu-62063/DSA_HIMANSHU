#include<iostream> 
#include<vector>
using namespace std;

int pivotelement(vector<int>v){
    int start=0; 
    int end=v.size()-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(mid+1<v.size() &&v[mid]>v[mid+1]){
            return mid;
        }
        else if(mid-1>=0 && v[mid-1]>v[mid]){
            return mid-1;
        }
        else if(v[start]>v[mid]){
            end=mid-1;
    }
       else
        start=mid+1;
       
       mid=(start+end)/2;
    }
    return -1;

}

int main(){

vector<int>v{3,4,5,6,7,1,2};
int ans=pivotelement(v);
cout<<"pivot element is"<<v[ans]<<endl;

    return 0;
}