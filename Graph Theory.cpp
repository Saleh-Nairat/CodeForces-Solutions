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
    --x , --y;
    vector<vector<int>> g(n);
    vector<bool> visited(n);
    int destination = -1;
    for(int i = 0 ; i < n ; ++i){
        int u , v; cin >> u >> v;
        --u , --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    auto dfs = [&] (auto && dfs , int u , int p) -> void {
        visited[u] = true;
        for(int child : g[u]){
            if(not visited[child]){
                dfs(dfs , child , u);
            }
            else{
                if(child != p){
                    if(~destination) continue;
                    destination = child;
                }
            }
        }
    };
    dfs(dfs , y , -1);
    visited.assign(n , false);
    queue<int> q;
    vector<int> distance(n);
    q.push(destination);
    distance[destination] = 0;
    visited[destination] = true;
    while(q.size()){
        int u = q.front();
        q.pop();
        for(int child : g[u]){
            if(not visited[child]){
                q.push(child);
                visited[child] = true;
                distance[child] = distance[u] + 1;
            }
        }
    }
    cout << (distance[y] < distance[x] ? "YES\n" : "NO\n");
} 
/*

problem:

time limit per test4 s.
memory limit per test256 MB

Khaled and Mahmoud find themselves navigating the bustling streets of New York City, which is represented by n
 districtss connected by exactly n
 two-way roads between them.

Khaled and Mahmoud start at districtss x
 and y
 respectively. Khaled's mission is to catch Mahmoud — meaning either to be in the same districts as him or to meet him while traveling along the same road.

During each move, they choose to go to an adjacent districts of their current one or stay in the same districts. Because Mahmoud knows Khaled so well, Mahmoud can predict where Khaled will go in the next move. Mahmoud can use this information to make his move. They start and end the move at the same time.

It is guaranteed that any pair of districtss is connected by some path and there is at most one road between any pair of districtss.

Assuming both players play optimally, answer if Mahmoud has a strategy to indefinitely escape Khaled.

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases.

The first line of each test case contains three space-separated integers n
, x
, y
 (3≤n≤2⋅105
; 1≤x,y≤n
) — the number of districtss (which equals the number of roads) and the starting districtss of Khaled and Mahmoud.

The following n
 lines each contain two integers ui
, vi
 (1≤ui,vi≤n
, ui≠vi
) — there is a road between districtss ui
 and vi
. There is at most one road between any unordered pair of districtss.

The sum of n
 over all test cases does not exceed 2⋅105
.

The roads are given that it is possible to get from any districts to any other districts going along the roads.

Output
For each test case output "YES" if Mahmoud can escape Khaled forever and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example:
input:
6
3 2 1
2 1
3 2
1 3
4 1 4
1 4
1 2
1 3
2 3
4 1 2
1 2
2 3
2 4
3 4
7 1 1
4 1
2 1
5 3
4 6
4 2
7 5
3 4
8 5 3
8 3
5 1
2 6
6 8
1 2
4 8
5 7
6 7
10 6 1
1 2
4 3
5 8
7 8
10 4
1 9
2 4
8 1
6 2
3 1

Output:
YES
NO
YES
NO
NO
YES

*/