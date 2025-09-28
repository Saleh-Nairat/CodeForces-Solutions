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
 

    tc
    {
        int n;
        bool cheats=false;
        cin >> n;
        vector<int> results(n);
        for(auto &e : results)
        cin >> e;
         if(count(results.begin(),results.end(),1)==n)
        {
            cheats=true;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(results[i]==0&&results[i+1]==0)
                {
                    cheats=true;
                }
            }
        }
        if(cheats)
        yes
        else
        no
    }
    return 0;
}