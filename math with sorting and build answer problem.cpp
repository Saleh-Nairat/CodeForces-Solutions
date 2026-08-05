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
    vector<int> a(n);
    vector<array<int , 2>> blocks;
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    auto b = a;
    sort(a.begin() , a.end());
    for(int i = 0 ; i < n ; ++i){
        int len = 1;
        ++i;
        while(i < n and a[i] == a[i - 1]) ++i , ++len;
        --i;
        blocks.push_back({a[i] , len});
    }   
    int last = 0 , subtract = 0;
    bool ok = blocks[0][0] == 0;
    map<int , int> answer;
    for(int i = 1 ; i < blocks.size() ; ++i){
        ok&= (blocks[i][0] - subtract) mod blocks[i - 1][1] == 0 and (blocks[i][0] - subtract) / blocks[i - 1][1] >= last;
        answer[blocks[i - 1][0]] = (blocks[i][0] - subtract) / blocks[i - 1][1];
        last = (blocks[i][0] - subtract) / blocks[i - 1][1] + 1;
        subtract = blocks[i][0];
    }
    answer[blocks[blocks.size() - 1][0]] = last + (last == 0);
    if(not ok) return void (cout << "-1\n");
    for(int i = 0 ; i < n ; ++i){
        cout << answer[b[i]] << " \n"[i == n - 1];
    }
} 