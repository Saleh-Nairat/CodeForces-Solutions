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
         int n,x,c=0,FirstDoor,LastDoor;
         cin >> n >> x;

         v doors(n);

         for(auto &door : doors)
            cin >> door;

         for(int i=0;i<n;i++)
         {

             if(doors[i]==1 && c==0)
             {
                 FirstDoor=i;
                 LastDoor=i;
                 c++;
             }

             else if(doors[i]==1)
             {
                 LastDoor=i;
             }

         }

         if(LastDoor-FirstDoor+1<=x)
         yes
         else
         no
     }
     return  0;
}



