#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int counter=0;
    string text;
    cin >> text;
    string goal="hello";
    for(int i=0;i<text.length();i++)
    {
        if(text[i]==goal[counter])
        {
            counter++;
        }
    }
    cout << (counter==5?"YES\n":"NO\n");
    return 0;
}