#include<bits/stdc++.h>
using namespace std;

int binary_search_iteration(int a[],int left,int right,int target){

 if(left<=right){
   int mid = left + (right-left)/2;
    if(a[mid]==target){
        return mid;
    }
    else if(a[mid]<target){
        return binary_search_iteration(a,mid+1,right,target);
    }
    else{
        return binary_search_iteration(a,left,mid-1,target);
    }
 }
 return -1;
}

int main(){
 int n,i,target;
// int left = 0;
// int right = n-1;

 cin>>n;
 int a[n];
 for(i=0;i<n;i++){
    cin>>a[i];
 }
 cout<<"enter target element: "<<endl;
 cin>>target;

 int result= binary_search_iteration(a,0,n-1,target);
 if(result== -1){
    cout<<"element is not found"<<endl;
 }
 else{
    cout<<"target element present in index:"<<result<<endl;
 }

}
