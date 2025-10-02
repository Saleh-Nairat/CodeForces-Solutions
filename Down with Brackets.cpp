#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define vi vector<int>
#define vl vector<ll>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);





    tc
    {
        int counter=0,result=0;
        string s;
        cin >> s;

        for(auto &e : s)
        {
            if(e=='(') {counter++;}

            else       {counter--;}

            if(counter==0) {result++;}
        }

        cout << (result>1? "YES" : "NO") << en;
    }

    return  0;
}


/*
                              Another Solution: Using Stack

#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define vi vector<int>
#define vl vector<ll>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);





    tc
    {
        int counter=0,result=0;
        string s;
        stack<char> stk;
        cin >> s;

        for(auto &e : s)
        {
            if(e=='(') {stk.push(e);}
            else       {stk.pop();}

            if(stk.empty()) {result++;}
        }

        cout << (result>1?"YES" : "NO") << en;
    }

    return  0;
}


*/
