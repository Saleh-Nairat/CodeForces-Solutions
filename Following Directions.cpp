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
        int n,x_axsis=0,y_axsis=0;
        string s;
        bool found=false;

        cin >> n >> s;

        for(auto c : s)
        {

            if(c=='U') {y_axsis++;}
            else if(c=='D') {y_axsis--;}
            else if(c=='R') {x_axsis++;}
            else {x_axsis--;}

            if(y_axsis==1 && x_axsis==1)
            {
                found=true;break;
            }

        }

        if(found) {yes}

        else {no}
    }
    return  0;
}
