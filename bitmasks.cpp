/*
═════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════
                                                      [النجم: 39]

                                                ﴾وَأَن لَّيۡسَ لِلۡإِنسَانِ إِلَّا مَا سَعَىٰ﴿

═════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════
*/

#include <bits/stdc++.h>
using namespace std;
#define Gaza ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define mod %
#define int long long
const int inf = 3e18;

void solve(int tc);

signed main()
{
    Gaza;

    int t = 1;
    cin >> t;
    for(int i = 1 ; i <= t ; i++)
        solve(i);

    return 0;
}

void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n + 1);
    vector prf(32 , vector<int>(n + 1));
    for(int i = 1 ; i <= n ; ++i){
        cin >> a[i];
    }
    for(int bit = 0 ; bit < 32 ; ++bit){
        for(int i = 1 ; i <= n ; ++i){
            prf[bit][i] += (a[i] >> bit & 1) + prf[bit][i - 1];
        }
    }
    int q; cin >> q;
    while(q--){
        int l , k; cin >> l >> k;
        int answer = -1 , lo = l , hi = n;
        while(lo <= hi){
            int mid = (lo + hi) / 2 , cur = 0;
            for(int bit = 31 ; ~bit ; --bit){
                if(prf[bit][mid] - prf[bit][l - 1] == mid - l + 1){
                    cur += 1LL << bit;
                }
            }
            if(cur >= k){
                answer = mid;
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
        cout << answer << ' ';
    }
    cout << '\n';
}