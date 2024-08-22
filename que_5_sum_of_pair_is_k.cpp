#include<bits/stdc++.h>
using namespace std;

void print_set_st(set<pair<int,int>> &st){
    for(const auto &p : st){
        cout<<"( "<<p.first<<" , "<<p.second<<" )"<<endl;
    }
}

void find_sum_pair(vector<int> &v,int n,int sum){
    set<pair<int,int>> st;
    set<int> seen;

    for(int i=0;i<v.size();i++){
        if(seen.count(sum-v[i])){
            st.insert(make_pair(v[i],sum-v[i]));
        }
        seen.insert(v[i]);
    }
    if(st.size()==0){
        cout<<"any pair does not found "<<endl;
    }
    else{
        print_set_st(st);
    }
}

int main(){
  int n,i,j;
  cin>>n;
  vector<int> v(n);
  for(i=0;i<n;i++){
    cin>>v[i];
  }
  int sum;
  cout<<"enter the sum : ";
  cin>>sum;

  find_sum_pair(v,n,sum);

}