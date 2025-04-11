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
    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    st.insert(-1);
    int cnt = 0;
    int t = -1;
    while (m--)
    {
        int x;
        cin >> x;
        auto it = st.upper_bound(x);
        auto it1 = st.lower_bound(x);

        if (*it <= x + k && *it != -1)
        {
            t = 1;
            st.erase(it);
        }
            
            
            else if (*it1 >= x - k && *it1 != -1) {
                
                if (*it1 >= x - k && *it1 != -1)
                {
                    t = 1;
                    st.erase(it1);
                }
            } if (t == 1) {
                cnt++;
            }

        
    }
    cout << cnt << endl;
        // cout << *it << endl;
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