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
    string s = "";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int last = x % 10;
        s += to_string(last);
    }
    if (s[s.size() - 1] == '0' and s.size() > 1)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}