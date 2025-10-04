#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define vi vector<int>
#define vl vector<ll>
void Saleh()
{
    int n,result=0; cin >> n;

    for(int i=1;i<n;i++)
    {
        if(n%i==0) {result++;}
    }

    cout << result << en;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);





    Saleh();

    return  0;
}
