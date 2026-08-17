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
    // cin >> t;
    for(int i = 1 ; i <= t ; i++)
        solve(i);

    return 0;
}

void solve(int tc)
{
    int n , m; cin >> n >> m;
    vector<vector<array<int , 2>>> g(n + 1);
    vector<int> from(n + 1);
    vector<bool> visited(n + 1);
    priority_queue<array<int , 3> , vector<array<int , 3>> , greater<array<int , 3>>> pq;
    for(int i = 0 ; i < m ; ++i){
        int a , b , w; cin >> a >> b >> w;
        g[a].push_back({b , w});
        g[b].push_back({a , w});
    }
    pq.push({0 , 1 , -1});
    while(pq.size()){
        auto [cost , node , parent] = pq.top();
        pq.pop();
        if(visited[node]) continue;
        visited[node] = true;
        from[node] = parent;
        for(auto [child , weight] : g[node]){
            if(not visited[child]){
                pq.push({cost + weight , child , node});
            }
        }
    }
    if(visited[n]){
        vector<int> path = {n};
        int curr = from[n];
        while(curr != -1){
            path.push_back(curr);
            curr = from[curr];
        }
        reverse(path.begin() , path.end());
        for(int i = 0 ; i < (int) path.size() ; ++i){
            cout << path[i] << " \n"[i == (int) path.size() - 1];
        }
    }
    else{
        cout << "-1\n";
    }
} 
// problem link : https://codeforces.com/problemset/problem/20/C