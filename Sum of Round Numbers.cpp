#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    int t;
    cin >> t;
    while(t--)
    {
        int counter=0;
        string s;
        cin >> s;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='0')
            counter++;
        }
        cout << counter << endl;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                continue;
            }
            else
            {
                cout << (s[i]-'0')*pow(10,i) << " ";
            }
        }
        cout << en;
    }
    return 0;
}
