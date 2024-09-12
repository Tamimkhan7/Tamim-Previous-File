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

bool isAlpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int32_t main()
{
    MTK;
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word, ans;
    int mx = 0;

    while (ss >> word)
    {
        while (!isAlpha(word.back()) && !word.empty())
            word.pop_back();

        while (!isAlpha(word.front()) && !word.empty())
            word.erase(word.begin());

        if (word.size() > mx)
        {
            mx = word.size();
            ans = word;
        }
    }

    cout << ans << '\n';
    return 0;
}
