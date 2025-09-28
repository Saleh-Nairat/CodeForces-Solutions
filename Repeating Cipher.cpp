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
 

        int n,skip=1;
        cin >> n;
        string s,result;
        cin >> s;
        for(int i=0;i<n;i++)
        {
            result+=s[i];
            i+=skip;
            skip++;
        }
        cout << result << en;
    return 0;
}