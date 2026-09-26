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

array<int , 2> ask(int mid){
    cout << "1 1 " << mid << endl;
    int p; cin >> p;
    cout << "2 1 " << mid << endl;
    int a; cin >> a;
    return {a , p};
}

void solve(int tc)
{
    int n; cin >> n;
    int l = 1 , h = n;
    array<int , 2> answer = {-1 , -1} , sums = ask(n);
    int diff = sums[0] - sums[1];
    while(l <= h){
        int mid = (l + h) / 2;
        array<int , 2> change = ask(mid);
        if(change[0] != change[1]){
            answer[0] = mid;
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << "! " << answer[0] << ' ' << answer[0] + diff - 1 << endl;
}