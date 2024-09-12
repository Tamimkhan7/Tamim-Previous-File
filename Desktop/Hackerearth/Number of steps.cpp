#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int mn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    for (int i = 0; i < n; i++)
        cin >> b[i];

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn)
            continue;
        if ((a[i] - mn) % b[i] != 0)
        {
            cout << -1 << '\n';
            return 0;
        }
        ans += (a[i] - mn) / b[i];
    }

    cout << ans << '\n';
    return 0;
}
