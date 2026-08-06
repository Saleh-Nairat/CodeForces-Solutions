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
    vector<int> a(n) , answer(n , inf);
    multiset<int> pos , neg;
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
        if(a[i] >= 0)
            pos.insert(a[i]);
        else
            neg.insert(a[i]);
    }
    auto it = pos.upper_bound(0);
    if(it == pos.end()) return void (cout << "-1\n");
    int i = 0;
    answer[0] = *it;
    pos.extract(it);
    while(pos.size() + neg.size()){
        int choice1 = inf , choice2 = inf;
        if(pos.size())
            choice1 = answer[i] + *pos.begin();
        auto it = neg.lower_bound(-(answer[i] - 1));
        choice2 = it == neg.end() ? inf : answer[i] - abs(*it);
        if(choice1 == inf and choice2 == inf) return void (cout << "-1\n");
        if(choice1 < choice2){
            answer[++i] = choice1;
            pos.extract(pos.begin());
        }
        else{
            answer[++i] = choice2;
            neg.extract(it);
        }
    }
    for(int i = 0 ; i < n ; ++i){
        cout << answer[i] << " \n"[i == n - 1];
    }
} 

// problem: https://codeforces.com/contest/2254/problem/E