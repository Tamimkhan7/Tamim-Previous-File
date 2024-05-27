#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define watch(x) cerr << "\n" \
                      << (#x) << " is " << (x) << endl;
#define mem(a, b) memset(a, b, sizeof(a))

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    sort(v.begin() + 1, v.end() + 1);
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
    cout << *(--v.end()) << '\n'; // kaj kortece
}
