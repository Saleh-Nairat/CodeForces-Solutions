#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define vi vector<int>
#define vl vector<ll>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);




    tc
    {
        string s;
        cin >> s;

        int result=s.size();
        int zeros=count(s.begin(),s.end(),'0');
        int ones=s.size()-zeros;

        for(auto c : s)
        {

            if(c=='0')
            {
                if(ones) {ones--;result--;}
                else {break;}
            }

            else
            {
                if(zeros) {zeros--;result--;}
                else {break;}
            }

        }
        cout << result << en;
    }
    return  0;
}
