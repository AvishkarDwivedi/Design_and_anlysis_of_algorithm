#include <bits/stdc++.h>
using namespace std;

void print_pairs(const set<pair<int, int>> &st)
{
    cout << "desired pair(s) are : ";
    for (const auto &p : st)
    {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }
}

void find_and_print_pairs(vector<int> &v, int diff)
{
    set<pair<int, int>> st;
    set<int> seen;
    for (int i = 0; i < v.size(); i++)
    {
        if (seen.count(v[i] - diff))
        {
            st.insert(make_pair(v[i], v[i] - diff));
        }
        if (seen.count(v[i] + diff))
        {
            st.insert(make_pair(v[i] + diff, v[i]));
        }
        seen.insert(v[i]);
    }
    if (st.size() == 0)
    {
        cout << "not any pair found" << endl;
    }
    print_pairs(st);
}

int main()
{
    int n, i, j;
    cin >> n;
    vector<int> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int diff;
    cout << "enter the differnce : ";
    cin >> diff;
    find_and_print_pairs(v, diff);
    return 0;
}
