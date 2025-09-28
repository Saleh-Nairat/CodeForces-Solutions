#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n,counter=0;
        cin >> n;
        string s;
        cin >> s;
        pair<int,int> p;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                //chek if it's first position of black ceil
                if(counter==0)
                {
                p.first=i;
                counter++;
                }
                else
                p.second=i;
            }
        }
        if(p.second==0)
        cout << 1 << en;
        else
        cout << p.second-p.first+1 << en;
    }
    return 0;
}