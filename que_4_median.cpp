#include<bits/stdc++.h>
using namespace std;

int main(){
int i,n,j;
cin>>n;
vector<int> v(n);

for(i=0;i<n;i++){
    cin>>v[i];
}
int median;
for(i=0;i<n;i++){
    if((n)%2==0){
        median = (v[n]+v[(n/2)+1])/2;
    }
    else{
        median = v[(n/2)+1];
    }
}
cout<<median<<endl;

}
