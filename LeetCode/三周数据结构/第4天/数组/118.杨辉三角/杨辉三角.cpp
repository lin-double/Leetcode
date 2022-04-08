#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	vector<vector<int>> generate(int &num)
	{
		vector < vector<int>> nums(num);
		for (int i = 0; i < num; i++)
		{
			nums[i].resize(i + 1);
			nums[i][0] = 1;
			for (int j = 1; j < i ; j++)
			{
				nums[i][j] = nums[i - 1][j] + nums[i - 1][j -1];
			}
			nums[i][i] = 1;
		}
		return nums;
	}
};
int main()
{
	int a = 5;

	return 0;
}