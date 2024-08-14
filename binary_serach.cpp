#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[],int n,int target){
   int left =0;
   int right = n-1;

   while(left<=right){
    int mid= left + (right-left)/2;
    if(a[mid] == target){
        return mid;
    }
    else if(a[mid]<target){
        left = mid + 1;         // ignore left half if given condition is full filled
    }
    else if(a[mid]>target){
        right = mid-1;          // ignore right half from given condition if condition is full filled
    }
   }
   return -1;   // element is not present in array
}
int main(){
 int n,i,target;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++){
    cin>>a[i];
 }
 cout<<"enter target element: "<<endl;
 cin>>target;

 int result = binary_search(a,n,target);
 if(result== -1){
    cout<<"element is not found"<<endl;
 }
 else{
    cout<<"target element present in index:"<<result<<endl;
 }

}
