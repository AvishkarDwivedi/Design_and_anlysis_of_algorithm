#include<bits/stdc++.h>
using namespace std;

int find_fixed_pos(int a[],int n){
    int ans =0;
for(int i=0;i<n;i++){
    if(a[i]==i){
        ans = i;
        return ans;
    }
}
return -1;
}

int main(){
 int i,n,j;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++){
    cin>>a[i];
 }
int element= find_fixed_pos(a,n);
if(element == -1 ){
    cout<<"fixed position not found"<<endl;
}
else{
    cout<<"fixed position is: "<<element<<endl;
}
}
