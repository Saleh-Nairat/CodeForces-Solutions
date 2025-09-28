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
 


    tc
    {
        int n;
        cin >> n;
        map<int,int> freqOfa,freqOfb;
        for(int i=0;i<n;i++)
        {
            int num;
            cin >> num;
            freqOfa[num]++;
        }
        for(int i=0;i<n;i++)
        {
            int num;
            cin >> num;
            freqOfb[num]++;
        }
        if(freqOfa.size()>=3 || freqOfb.size()>=3)
        yes
        else if(freqOfa.size()==2 && freqOfb.size()==2)
        {
            yes
        }
        else
        no
    }
    return 0;
}
