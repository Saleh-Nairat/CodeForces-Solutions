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
 

    tc
    {
        int n,m,total=0,result=0;
        cin >> n >> m;
        vector<string> words(n);
        for(int i=0;i<n;i++)
        cin >> words[i];
        for(int i=0;i<n;i++)
        {
            total+=words[i].length();
            if(total<=m)
            result++;
            else
            break;
        }
        cout << result << en;
    }
    return 0;
}