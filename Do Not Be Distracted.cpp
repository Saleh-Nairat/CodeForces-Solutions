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
        bool found=true;
        int n,counter=0;
        cin >> n;
        vector<char> letters(n);
        unordered_set<char> st;
        for(int i=0;i<n;i++)
        cin >> letters[i];
        for(int i=0;i<n;i++)
        {
            counter=0;
            int j=i;
            if(!st.count(letters[i]))
            while(j<n&&letters[j++]==letters[i])
            {
                counter++;
            }
            else
            {
                found=false;
                break;
            }
            st.insert(letters[i]);
            i+=counter-1;
        }
        if(found)
        yes
        else
        no
    }
    return 0;
}
