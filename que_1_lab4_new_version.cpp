#include <bits/stdc++.h>
using namespace std;

int main()
{
  int i, j, n;
  cin >> n;
  vector<int> v(n);
  vector<int> sizes;
  for (i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  while (!v.empty())
  {
    int min_ele = *min_element(v.begin(), v.end());

    for (i = 0; i < v.size(); i++)
    {
      v[i] -= min_ele;
    }

    v.erase(remove(v.begin(), v.end(), 0), v.end());

    sizes.push_back(v.size());

    if (!v.empty())
    {
      cout << v.size() << " corresponds to : [";
      for (i = 0; i < v.size(); i++)
      {
        cout << v[i];
        if (i != v.size() - 1)
        {
          cout << ",";
        }
      }
      cout << "]" << endl;
    }
    else
    {
      cout << "0 coresponds to [0]" << endl;
    }
  }

  int sum = accumulate(sizes.begin(),sizes.end(),0);
  cout<<sum<<endl;

  for(i=0;i<sizes.size();i++){
    cout<<sizes[i]<<" ";
  }
  return 0;
}