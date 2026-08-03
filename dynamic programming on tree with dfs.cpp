/*
═════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════
                                                      [النجم: 39]

                                                ﴾وَأَن لَّيۡسَ لِلۡإِنسَانِ إِلَّا مَا سَعَىٰ﴿

═════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════
*/

#include <bits/stdc++.h>
using namespace std;
#define Gaza ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
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
    vector<int> a(n) , dp(n);
    vector<vector<int>> g(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    for(int i = 0 ; i < n - 1 ; ++i){
        int u , v; cin >> u >> v;
        --u , --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    function<void(int , int , int , int)> dfs = [&] (int u , int p , int best , int help) -> void {
        dp[u] = best;
        for(int child : g[u]){
            if(child == p) continue;
            int new_help = max(best - a[child] , 0LL);
            int new_best = a[child] + help;
            dfs(child , u , new_best , new_help);
        }
    };
    dfs(0 , -inf , a[0] , 0);
    for(int i = 0 ; i < n ; ++i){
        cout << dp[i] << " \n"[i == n - 1];
    }
} 