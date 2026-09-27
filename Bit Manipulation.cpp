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
    int n , k; cin >> n >> k;
    deque<int> answer;
    k ^= n;
    for(int i = 0 ; i <= 30 ; ++i){
        if(k >> i & 1){
            if(1LL << i > n - 1)
                return void (cout << "NO\n");
            answer.push_back(1LL << i);    
        }
    }
    answer.push_front(0);
    for(int i = 1 ; i < n ; ++i){ // 1000 , 1001
        if(__builtin_popcountll(i) == 1 and (i & k)) continue;
        answer.push_front(i);
    }
    cout << "YES\n";
    for(int i = 0 ; i < n ; ++i){
        cout << answer[i] << " \n"[i == n - 1];
    }
}