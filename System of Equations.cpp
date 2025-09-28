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
 



    int n,m,result=0;
    cin >> n >> m;
    for(int i=0;i<=1000;i++)
    {
        for(int j=0;j<=1000;j++)
        {
            if(i*i+j==n&&j*j+i==m)
            result++;
        }
    }
    cout << result << en;
    return 0;
}