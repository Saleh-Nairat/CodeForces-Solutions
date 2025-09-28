#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 

    int n,result=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        n-=i*(i+1)/2;
        if(n<0)
        break;
        result++;
    }
    cout << result << en;
    return 0;
}