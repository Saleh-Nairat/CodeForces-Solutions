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

        if(nums[mid]==target)
        {
            return mid;
        }

        else if(nums[mid]>target)
        {
            high=mid-1;
        }

        else
        {
            low=mid+1;
        }

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
    int n; cin >> n;
    int Maximum=INT_MIN,MinimumSubsegment=INT_MAX;

    vi nums(n);
    pair<int,int> result;
    unordered_map<int,int> freq;
    unordered_map<int,pair<int,int>> Positions;

    for(auto &e : nums) {cin >> e;freq[e]++;Positions[e]={-1,-1};}

    for(auto [key,value] : freq)
    {
        if(value > Maximum) {Maximum=value;}
    }

    for(int i=0;i<n;i++)
    {
        if(Positions[nums[i]].first==-1) {Positions[nums[i]].first=i+1;}

        Positions[nums[i]].second=i+1;
    }

    for(auto [key,value] : freq)
    {
        if(value==Maximum)
        {
            if(Positions[key].second-Positions[key].first+1<MinimumSubsegment)
            {
                result.first=Positions[key].first;
                result.second=Positions[key].second;
                MinimumSubsegment=Positions[key].second-Positions[key].first+1;
            }
        }
    }

    cout << result.first << " " << result.second << en;
}





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    Saleh();


    return  0;
}
