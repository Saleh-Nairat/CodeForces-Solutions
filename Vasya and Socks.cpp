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
 


    int n,m,day=1,result=0;
    cin >> n >> m;
    while(n)
    {
        n--;
        if(day%m==0)
        n++;
        result++;
        day++;
    }
    cout << result << en;
    return 0;
}