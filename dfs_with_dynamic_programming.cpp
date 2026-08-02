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
    vector<vector<int>> g(n + 1);
    vector<int> dp(n + 1) , depth(n + 1);
    int answer = n;
    for(int i = 0 ; i < n - 1 ; ++i){
        int p; cin >> p;
        g[p].push_back(i + 2);
    }
    function<void(int)> dfs = [&] (int u) {
        int mx = 0 , second_mx = 0;
        for(int child : g[u]){
            dfs(child);
        }
        for(int child : g[u]){
            if(depth[child] + 1 > mx){
                second_mx = mx;
                mx = depth[child] + 1;
            }
            else if(depth[child] + 1 > second_mx){
                second_mx = depth[child] + 1;
            }
        }
        depth[u] = mx;
        dp[u] = second_mx;
    };
    dfs(1);
    for(int i : dp){
        answer+= i;
    }
    cout << answer << '\n';
} 