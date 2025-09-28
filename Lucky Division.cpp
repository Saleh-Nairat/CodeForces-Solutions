#include <iostream>
using namespace std;
bool IsLucky(int number)
{
	while(number!=0)
	{
		int digit=number%10;
		if(digit!=4&&digit!=7)
		return false;
		number/=10;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	if(IsLucky(n))
	cout << "YES";
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(IsLucky(i))
			if(n%i==0){
			cout << "YES";
			return 0;}
		}
		cout << "NO";
	}
	return 0;
}