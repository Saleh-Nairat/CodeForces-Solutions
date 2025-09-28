#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> indexs;
    char shift;
    string text,result="";
    cin >> shift >> text;
    char moli[30]={'q','w','e','r','t','y','u',
        'i','o','p',
'a','s','d','f','g','h','j','k','l',';',
'z','x','c','v','b','n','m',',','.','/'};
    for(int i=0;i<text.length();i++)
    {
        for(int j=0;j<30;j++)
        {
            if(text[i]==moli[j])
            {
                indexs.push_back(j);
                break;
            }
        }
    }
    if(shift=='L')
    for(int i=0;i<text.length();i++)
        result+=moli[indexs[i]+1];
    else
       for(int i=0;i<text.length();i++)
        result+=moli[indexs[i]-1];
    cout << result << endl;

    return 0;
}