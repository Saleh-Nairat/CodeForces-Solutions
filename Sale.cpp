#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,m;
    cin >> n >> m;
    multiset<int> tv;
    for(int i=0;i<n;i++)
    {
        int t;
        cin >> t;
        tv.insert(t);
    }
    int i=1,result=0;
    for(auto value : tv)
    {
        if(i++>m)
        break;
        else if(value<=0)
        result+=abs(value);
    }
    cout << result << en;
    return 0;
}