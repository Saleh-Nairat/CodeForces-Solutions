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
const int N = 2e5;
vector<vector<int>> divs(N + 1);

void solve(int tc);

signed main()
{
    Gaza;

    for(int i = 2 ; i <= N ; ++i){
        for(int j = i ; j <= N ; j += i){
            divs[j].push_back(i);
        }
    }

    int t = 1;
    cin >> t;
    for(int i = 1 ; i <= t ; i++)
        solve(i);

    return 0;
}

void solve(int tc)
{
    int n , k; cin >> n >> k;
    vector<int> a(n) , ok(n + 1);
    int answer = 1;
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
        for(int div : divs[a[i]]){
            ok[div] += a[i] < 4 * div;
        }
    }
    sort(a.begin() , a.end());
    for(int i = n ; i > 1 ; --i){
        int p = lower_bound(a.begin() , a.end() , 4 * i) - a.begin();
        if(p - ok[i] <= k){
            answer = i;
            break;
        }
    }
    cout << answer << '\n';
} 