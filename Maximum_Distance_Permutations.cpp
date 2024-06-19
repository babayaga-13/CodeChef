#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
            v.push_back(i);
        }
        cout << endl;
        n = n / 2;
        sort(v.rbegin(), v.rend());
        reverse(v.begin(), v.begin() + n);
        reverse(v.begin() + n, v.end());

        for (auto u : v)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}