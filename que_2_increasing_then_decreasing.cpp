#include<bits/stdc++.h>
using namespace std;

int find_max_element(int a[],int n){
 int left=0;
 int right = n-1;

 while(left<=right){
    int mid = left+ (right - left)/2;
    if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
        return mid;
    }
 }
 return -1;
}

int main(){
int n,i,j;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
int ans= find_max_element(a,n);
if(ans==0){
    cout<<"not valid array"<<endl;
}
else{
    cout<<"max element is: "<<a[ans]<<"\npresent at index: "<<ans<<endl;
}
return 0;
}
