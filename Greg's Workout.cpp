#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
bool ispal(string s)
{
    string temp=s;
    reverse(s.begin(),s.end());
    return temp==s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 



        bool b=false,bk=false,c=true;
        int n,chest=0,bi=0,back=0;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        cin >> nums[i];
        for(int i=0,j=0;i<n;i++)
        {
            if(!b&&!bk)
            {
                chest+=nums[i];
                c=false;
                bk=false;
                b=true;
            }
            else if(!c&&!bk)
            {
                bi+=nums[i];
                b=false;
                c=false;
                bk=true;
            }
            else
            {
                back+=nums[i];
                b=false;
                bk=false;
                c=true;
            }
        }
        if(chest>bi&&chest>back)
        cout << "chest" << en;
        else if(bi>chest&&bi>back)
        cout << "biceps" << en;
        else
        cout << "back" << en;
    return 0;
}
