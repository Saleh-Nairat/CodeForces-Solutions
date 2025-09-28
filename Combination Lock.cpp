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
 

    int n,road1,road2,result=0;
    cin >> n;
    string a,b;
    cin >> a >> b;
    for(int i=0;i<n;i++)
    {
        road1=abs((a[i]-'0')-(b[i]-'0'));
        road2=10-road1;
        result+=min(road1,road2);
    }
    cout << result << en;
    return 0;
}