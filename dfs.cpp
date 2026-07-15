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
    int n , x , y; cin >> n >> x >> y;
    int a[n]; for(int i = 0 ; i < n ; ++i) cin >> a[i];
    bool visited[n]{} , ok = true;
    int where[n]{} , pos[n + 1]{} , id = 1;
    for(int i = 0 ; i < n ; ++i){
        pos[a[i]] = i;
    }
    vector<vector<int>> g(n);
    for(int i = 0 ; i < n ; ++i){
        if(i + x < n){
            g[i].push_back(i + x);
            g[i + x].push_back(i);
        }
        if(i + y < n){
            g[i].push_back(i + y);
            g[i + y].push_back(i);
        }
    }
    function<void(int)> dfs = [&] (int u) -> void{
        where[u] = id;
        visited[u] = true;
        for(int child : g[u]){
            if(not visited[child])
                dfs(child);
        }
    };
    for(int i = 0 ; i < n ; ++i){
        if(not visited[i]){
            dfs(i);
            ++id;
        }
    }
    for(int i = 0 ; i < n ; ++i){
        ok&= where[i] == where[pos[i + 1]];
    }
    cout << (ok ? "YES\n" : "NO\n");
}