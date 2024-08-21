#include<bits/stdc++.h>
using namespace std;

int main(){
 int i,j,n;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++){
    cin>>a[i];
 }
int ans=0;
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    if(a[i]==a[j]){

     ans=i;
    }
 }
 }
 cout<<ans<<endl;
 return 0;
}
