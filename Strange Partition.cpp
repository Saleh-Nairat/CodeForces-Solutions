#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define vi vector<int>
#define vl vector<ll>
#define vd vector<double>
#define vc vector<char>
bool isVowel(char c)
{
    return c=='a' || c=='u' || c=='i' || c=='e' || c=='o';
}

bool isPalindrome(string s)
{
    string temp=s;

    reverse(temp.begin(),temp.end());

    return temp==s;
}

int binary_search(vector<int> nums,int target)
{
    int low=0,high=nums.size()-1;

    while(low<=high)
    {

        int mid=low + (high - low) / 2;

        if(nums[mid]==target) {return mid;}

        else if(nums[mid]>target) {high=mid-1;}

        else {low=mid+1;}

    }

    return -1;
}
int SumOfDigit(int n)
{
    int result=0;

    while(n) {result+=n%10; n/=10;}

    return result;
}

bool isPrime(int n)
{
    if(n==2) {return true;}
    if(n%2==0 || n<=1) {return false;}

    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0) {return false;}
    }

    return true;
}





void Saleh()
{
    ll n,x; cin >> n >> x;

    ll SumBefore=0,SumAfter=0;
    vl nums(n);

    for(auto &e : nums) {cin >> e;}

    for(auto &e : nums)
    {
        SumBefore+=e;
        SumAfter+=(e-1)/x+1;
    }

    SumBefore=(SumBefore-1)/x+1;

    cout << SumBefore << " " << SumAfter << en;
}





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    tc
    {
        Saleh();
    }


    return  0;
}
