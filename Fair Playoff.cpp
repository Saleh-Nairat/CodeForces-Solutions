#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 



    tc
    {
        vector<int> players(4);
        cin >> players[0] >> players[1] >> players[2] >> players[3];
        int a=max(players[0],players[1]);
        int b=max(players[2],players[3]);
        sort(players.rbegin(),players.rend());
        if(a==players[0]&&b==players[1]||
           b==players[0]&&a==players[1])
           yes
           else
           no
    }
    return 0;
}
