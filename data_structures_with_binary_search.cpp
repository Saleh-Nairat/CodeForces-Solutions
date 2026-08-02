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
    int n , q; cin >> n >> q;
    vector<int> a(n) , prf(n) , found;
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
        prf[i] = not i ? a[i] == 1 : prf[i - 1] + (a[i] == 1);
        if(i and a[i] == a[i - 1]){
            found.push_back(i - 1);
        }
    }
    while(q--){
        int l , r; cin >> l >> r;
        --l , --r;
        bool ok = false;
        int len = r - l + 1 , ones = prf[r] - (l == 0 ? 0 : prf[l - 1]) , zeros = len - ones;
        if(ones mod 3 or zeros mod 3){
            cout << "-1\n";
            continue;
        }
        auto it = lower_bound(found.begin() , found.end() , l);
        if(it == found.end() or *it + 1 > r) ok = true;
        cout << len / 3 + ok << '\n';
    }
} 