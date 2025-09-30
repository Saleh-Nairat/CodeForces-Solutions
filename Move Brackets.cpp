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
        int n,counter=0,result=0;
        string s;

        cin >> n >> s;

        for(auto c : s)
        {
            if(c=='(') {counter++;}

            else {counter--;}

            if(counter<result) {result=counter;}
        }

        cout << abs(result) << en;

    }
    return  0;
}