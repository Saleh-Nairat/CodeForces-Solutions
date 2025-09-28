#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);   
    cin.tie(nullptr);

    int s,n;
    cin >> s >> n;
    
    vector<pair<int,int>> dragons;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        pair<int,int> dragon(x,y);
        dragons.push_back(dragon);
    }
    sort(dragons.begin(),dragons.end());
    for(int i=0;i<dragons.size();i++)
    {
        if(s>dragons.at(i).first) s+=dragons.at(i).second;
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}