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
    int n; cin >> n;
    int result=0;

    vi nums(n);
    unordered_map<int,int> freq;

    for(auto &e : nums) {cin >> e;}

    //01.03.2025.

    for(int i=0;i<n;i++)
    {
        freq[nums[i]]++;

        if(freq[0]>=3 && freq[1]>=1 && freq[2]>=2 && freq[3]>=1 && freq[5]>=1)
        {
            result=i+1;
            break;
        }
    }

    cout << result << en;
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
