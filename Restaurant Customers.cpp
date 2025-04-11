#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define nl '\n'
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define ALL(v) (v).begin(), (v).end()
#define rALL(v) (v).rbegin(), (v).rend()

#define show(x) cout << #x << " : " << x << endl

void solve(int tc)
{
    int n;
    cin >> n;
    vector<pair<int, int>> cus;

    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        cus.pb({a, 1});
        cus.pb({b, -1});
    }
    sort(cus.begin(), cus.end());
    int cur_cus = 0, maxi = 0;
    for (auto x:cus)
    {
        if(x.ss>0)
        {
            cur_cus += 1;
        }
        else{
            cur_cus -= 1;
        }
        maxi = max(cur_cus, maxi);
    }
    cout << maxi << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);
}