#include <iostream>
#include <vector>
using namespace std;
bool IsPrime(int number)
{
	for (int i = 2; i * i <= number; i++)
		if (number % i == 0)
			return false;
	        return true;
}
int main()
{
	vector<int> nums;
	int n, m;
	cin >> n >> m;
	for (int i = 2; i <= 50; i++)
	{
		if (IsPrime(i))
			nums.push_back(i);
	}
	for (int i = 0; i < nums.size()-1; i++)
	{
		if (nums.at(i) == n && nums.at(i + 1) == m)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}