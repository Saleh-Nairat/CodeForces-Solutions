#include <bits/stdc++.h>
using namespace std;
int isdis(vector<string> names,int index,string s)
{
    int counter=0;
    for(int i=0;i<index;i++)
    {
        if(names[i]==s)
        counter++;
    }
    return counter;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    
    string s;
    cin >> s;
    bool found=true;
    for(int i=1;i<s.length();i++)
    {
        if(isupper(s[i]))
        continue;
        else
        found=false;
    }
    if(found)
    {
        for(int i=0;i<s.length();i++)
        {
            if(isupper(s[i]))
            s[i]=tolower(s[i]);
            else
            s[i]=toupper(s[i]);
        }
        cout << s << endl;
    }
    else
    cout << s << endl;
    return 0;
}
