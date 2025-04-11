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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> app(n);
    for (int i = 0; i < n;i++)
    {
        cin >> app[i];
    }
        vector<int> am(m);
        for (int i = 0; i < m; i++)
        {
            cin >> am[i];
        }
        sort(app.begin(), app.end());
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << app[i] << " ";
    //     }
    // cout << nl;
    sort(am.begin(), am.end());
    // for (int j = 0; j < n; j++)
    // {
    //     cout << am[j] << " ";
    // }
    // cout << nl;

    int cnt = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
      if(abs(app[i]-am[j])<=k)
      {
        cnt++;
        i++;
        j++;
      }
      else if(app[i]+k<am[j])
      {
          i++;
      }
      else{
          j++;
      }
   }
   cout << cnt << nl;
}

int main()
{
 ios_base::sync_with_stdio(0);
  cin.tie(0);
    int tc = 1;
    //cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);
}