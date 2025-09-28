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





     tc
     {
        vector<string> vs(3);

        cin >> vs[0] >> vs[1] >> vs[2];

        for(int i=0;i<3;i++)
        {
            bool foundA=false,foundB=false,foundC=false;
            for(auto c : vs[i])
            {
                if(c=='A'){foundA=true;}
                else if(c=='B'){foundB=true;}
                else if(c=='C'){foundC=true;}
            }
            if(foundA&&foundB&&foundC)
            {
                continue;
            }
            else
            {
                if(!foundA)
                cout << 'A' << en;
                else if(!foundB)
                cout << 'B' << en;
                else 
                cout << 'C' << en;
            }
        }
     }

     return  0;
}



