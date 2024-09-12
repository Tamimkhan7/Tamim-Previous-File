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
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    ll mx = 0, cnt = 0;
    for (auto [x, y] : mp)
    {
        if (y > mx)
        {
            cnt = 1;
            mx = y;
        }
        else if (y == mx)
            cnt++;
    }
    cout << cnt << '\n';
    return 0;
}