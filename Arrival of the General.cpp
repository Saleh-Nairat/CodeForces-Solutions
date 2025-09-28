#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,steps=0,maxnumber,maxindex=0,minnumber,minindex=0;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < nums.size(); i++)
	{
		cin >> nums[i];
		if (i == 0 || nums[i] > maxnumber)
		{
			maxnumber = nums[i];
			maxindex = i;
		}
		if (i == 0 || nums[i] <= minnumber)
		{
			minnumber = nums[i];
			minindex = i;
		}
	}
	for (int i = maxindex; i > 0; i--)
	{
		int temp = nums[i - 1];
		nums[i-1] = nums[i];
		nums[i] = temp;
		steps++;
	}
	for (int i = minindex; i < nums.size()-1; i++)
	{
		int temp = nums[i + 1];
		nums[i + 1] = nums[i];
		nums[i] = temp;
		steps++;
	}
	if (maxindex > minindex)
	{
		steps--;
	}
	cout << steps << endl;
	return 0;
}