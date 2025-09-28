#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 


    tc
    {
        int n,def1=0,def2=0,share=0;
        cin >> n;
        ll result=0;
        vector<int> cand(n),orange(n);
        for(int i=0;i<n;i++)
        cin >> cand[i];
        for(int i=0;i<n;i++)
        cin >> orange[i];
        int value1=*min_element(cand.begin(),cand.end());
        int value2=*min_element(orange.begin(),orange.end());
        for(int i=0;i<n;i++)
        {
            if(cand[i]!=value1 && orange[i]!=value2)
            {
                def1=cand[i]-value1;
                def2=orange[i]-value2;
                share=min(def1,def2);
                result+=def1+def2-share;
            }
            else if(cand[i]!=value1)
            {
                result+=cand[i]-value1;
            }
            else
            {
                result+=orange[i]-value2;
            }
        }
        cout << result << en;
    }
    return 0;
}
