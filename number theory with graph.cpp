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
    vector<vector<int>> g(n);
    vector<array<int , 2>> order(n - 1);
    map<array<int , 2> , int> answer;
    bool ok = true;
    for(int i = 0 ; i < n - 1 ; ++i){
        int u , v; cin >> u >> v;
        --u , --v;
        order[i] = {u , v};
        g[u].push_back(v);
        g[v].push_back(u);
        ok&= g[u].size() < 3 and g[v].size() < 3;
    }
    if(not ok) return void (cout << "-1\n");
    function<void(int , int , int)> dfs = [&] (int u , int p , int cur_prime) -> void {
        for(int child : g[u]){
            if(child == p) continue;
            answer[{u , child}] = answer[{child , u}] = cur_prime;
            cur_prime = cur_prime == 2 ? 3 : 2;
            dfs(child , u , cur_prime);
            if(u == 0) cur_prime = 3;
        }
    };
    dfs(0 , -1 , 2);
    for(int i = 0 ; i < n - 1 ; ++i){
        cout << answer[order[i]] << " \n"[i == n - 2];
    }
} 