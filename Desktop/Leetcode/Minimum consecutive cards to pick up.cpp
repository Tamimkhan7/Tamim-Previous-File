#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    int ans = 0;
    for (auto [x, y] : mp)
    {
        cout << x << ' ' << y << '\n';
        // while (y > 1)
        // {
        //     if (y > 1 and n > 1)
        //     {
        //         y -= 2;
        //         n -= 2;
        //         ans += 2;
        //     }
        // }
    }
    cout << ans << '\n';
}