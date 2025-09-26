#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long 
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll> 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
     
    
    int a,b,g,chance;
    cin >> a >> b;
    chance=6-max(a,b)+1;
    g=gcd(chance,6);
    cout << chance/g << "/" << 6/g << en;
    return 0;
}