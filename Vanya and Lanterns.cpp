#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll>
#define vd vector<double>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



     double n,l,MaximumGap=0,result=0;
     cin >> n >> l;

     vd lights(n);

     for(auto &light : lights)
        cin >> light;

     sort(lights.begin(),lights.end());

     for(int i=0;i<n-1;i++)
     {
         double temp=abs(lights[i]-lights[i+1]);

         MaximumGap=max(MaximumGap,temp);
     }

     MaximumGap=MaximumGap/(2*1.0);

     MaximumGap=max(MaximumGap,max(l-lights[n-1],lights[0]-0));

     result=MaximumGap;

     cout << fixed << setprecision(10) << result << en;

     return  0;
}



