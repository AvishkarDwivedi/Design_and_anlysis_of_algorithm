#include<bits/stdc++.h>
using namespace std;

int main(){
int i,j,n;
cin>>n;
vector<int> v(n-1);

for(i=0;i<n-1;i++){
    cin>>v[i];
}

int total_sum = (n*(n+1))/2;
int sum = accumulate(v.begin(),v.end(),0);

cout<<"missing element is : "<<total_sum-sum<<endl;

}
