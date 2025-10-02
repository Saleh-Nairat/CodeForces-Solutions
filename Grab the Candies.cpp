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
        int n,odds=0,evens=0;
        cin >> n;

        vi candies(n);

        for(auto &e : candies)
        {
            cin >> e;

            if(e%2) {odds+=e;}

            else {evens+=e;}
        }

        cout << (evens>odds?"YES":"NO") << en;
    }

    return  0;
}