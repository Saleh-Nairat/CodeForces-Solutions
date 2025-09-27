#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
pair<int,int> isfound(vector<char> a)
{
    pair<int,int> p(-1,-1);
    int ca=0,cb=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='0')
        {
        p.first=i;
        ca++;
        }
        else
        {
            p.second=i;
            cb++;
        }
        if(ca&&cb)
        break;
    }
    return p;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 

    tc
    {
        string s;
        cin >> s;
        int size=s.length(),counter=1;
        vector<char> a;
        for(int i=0;i<s.length();++i)
        {
            a.push_back(s[i]);
        }
        while(size>=2)
        {
            pair<int,int> p=isfound(a);
            if(p.first!=-1&&p.second!=-1)
            {
                size-=2;
                counter++;
                if(p.first>p.second)
                {
                    a.erase(a.begin()+p.first);
                    a.erase(a.begin()+p.second);
                }
                else
                {
                    a.erase(a.begin()+p.second);
                    a.erase(a.begin()+p.first);
                }
            }
            else
            break;
        }
        if(counter%2)
        cout << "NET" << en;
        else
        cout << "DA" << en;
    }
    return 0;
}