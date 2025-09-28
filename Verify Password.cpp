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
        bool found=false;
        int n;
        cin >> n;
        string s;
        cin >> s;

        v nums;
        vector<char> letter;

        for(int i=0;i<n;i++)
        {
            if(s[i]>=48 && s[i]<=57)
                nums.push_back(s[i]-'0');
            else if(s[i]>=97 && s[i]<=122)
            {
                letter.push_back(s[i]);
                if(n!=n-1)
                {
                    if(s[i+1]>=48 && s[i+1]<=57)
                    {
                        found=true;
                    }
                }
            }
            else
            {
                found=true;
            }
            if(found)
            break;
        }
        if(found)
            no
        else
        {
            v temp=nums;
            sort(temp.begin(),temp.end());
            vector<char> l=letter;
            sort(l.begin(),l.end());
            if(l==letter && temp==nums)
            yes
            else
            no
        }
    }

    return  0;
}
