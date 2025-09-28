#include <iostream>
#include <string>
#include <vector>
bool IsGood(int number, int k)
{
	bool found = false;
	for (int i = 0; i <= k; i++)
	{
		int temp = number;
		found = false;
		while (temp != 0)
		{
			int digit = temp % 10;
			if (digit == i)
			{
				found = true;
				break;
			}
			temp /= 10;
		}
		if (!found)
			return false;
	}
	return true;
}
using namespace std;
int main()
{
	int n, k, counter = 0;
	cin >> n >> k;
	vector<int> nums(n);
	for (int i = 0; i < nums.size(); i++)
	{
		cin >> nums.at(i);
		if (IsGood(nums.at(i),k))
			counter++;
	}
	cout << counter << endl;
	return 0;
}