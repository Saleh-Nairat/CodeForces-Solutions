#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 

    int n;
    cin >> n;
    string s;
    cin >> s;
    int zeros=count(s.begin(),s.end(),'0');
    int ones=count(s.begin(),s.end(),'1');
    cout << s.length()-min(ones,zeros)*2 << en;
    return 0;
}