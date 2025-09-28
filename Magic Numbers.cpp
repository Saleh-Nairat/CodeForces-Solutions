#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 

    string s;
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        if(s.substr(i,3)=="144")
        {
            i+=2;
        }
        else if(s.substr(i,2)=="14")
        {
            i++;
        }
        else if(s.substr(i,1)=="1")
        {
            continue;
        }
        else
        {
            no
            return 0;
        }
    }
    yes
    return 0;
}