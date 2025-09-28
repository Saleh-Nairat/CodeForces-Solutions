#include <bits/stdc++.h>
using namespace std;
#define en '\n'
bool isLucky(string year)
{
    map<char,int> mp;
    for(int i=0;i<year.length();++i)
    {
        mp[year[i]]++;
        if(mp[year[i]]>1)
        return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int year;
    cin >> year;
    for(int i=year+1;i<=INT_MAX;i++)
    {
        if(isLucky(to_string(i)))
        {
            cout << i;
            break;
        }
    }
    return 0;
}

/*
                      another solution 

#include <bits/stdc++.h>
using namespace std;
#define en '\n'
bool isLucky(int year)
{
    string s=to_string(year);
    set<char> st;
    for(int i=0;i<s.length();++i)
    {
        st.insert(s[i]);
    }
    if(s.length()==st.size())
    return true;
    else
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int year;
    cin >> year;
    for(int i=year+1;i<=9999;i++)
    {
        if(isLucky(i))
        {
            cout << i;
            break;
        }
    }
    return 0;
}
*/