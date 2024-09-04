#include <bits/stdc++.h>
using namespace std;

int main()
{
  int i, j, n;
  cin >> n;
  vector<int> v(n);
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
  return 0;
}