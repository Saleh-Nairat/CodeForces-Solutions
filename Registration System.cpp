#include <bits/stdc++.h>
using namespace std;
#define en '\n';
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int n;
    cin >> n;
    map<string,int> mp;
    for(int i=0;i<n;i++)
    {
        string name;
        cin >> name;
        if(mp[name]==0)
        {
           cout << "OK\n";
           mp[name]++;
        }
        else
        {
            cout << name << mp[name]++ << en;
        }
    }
    return 0;
}
