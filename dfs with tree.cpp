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
    vector<vector<array<int , 2>>> g(n);
    int steps = 0;
    for(int i = 0 ; i < n - 1 ; ++i){
        int u , v; cin >> u >> v;
        --u , --v;
        g[u].push_back({v , i});
        g[v].push_back({u , i});
    }
    function<void(int , int , int , int)> dfs = [&] (int u , int p , int depth , int idx) { 
        steps = max(steps , depth);
        for(auto [child , id] : g[u]){
            if(child == p) continue;
            if(id > idx){
                dfs(child , u , depth , id);
            }
            else{
                dfs(child , u , depth + 1 , id);
            }
        }
    };
    dfs(0 , -1 , 0 , inf);
    cout << steps << '\n';
} 