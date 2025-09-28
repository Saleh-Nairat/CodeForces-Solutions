#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            s.erase(i,3);
            s.insert(i," ");
        }
    }
    int counter=0;
    for(int i=0;i<s.length();i++)
    {
        if(i==0&&s[i]==' '||s[i]==' '&&s[i+1]==' ')
        s.erase(i,1);
    }
    cout << s << endl;
    return 0;
}