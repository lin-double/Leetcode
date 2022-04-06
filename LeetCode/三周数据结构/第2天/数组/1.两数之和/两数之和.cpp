#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
//通过
class Solution1
{
public:
	vector<int> twoSums(vector<int> &nums,int target)
	{
		vector<int> ele ;
		int sum = 0;
		for (int i = 0; i < nums.size()-1; i++)
		{
			for (int j = i+1; j < nums.size(); j++)
			{
				sum = nums[i] + nums[j];
				if (sum == target)
				{
					ele.push_back(i);
					ele.push_back(j);
				}
				sum = 0;
			}
		}
		return ele;
	}
};
//时间复杂度：O(N ^ 2)，其中 N 是数组中的元素数量。最坏情况下数组中任意两个数都要被匹配一次。
//空间复杂度：O(1)。
class Solution2 {
public:
	vector<int> twoSums(vector<int>&nums, int target)
	{
		int n = nums.size();
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (nums[i] + nums[j] == target) {
					return { i,j };
				}
			}
		}
		return{};
	}
};
int main()
{
	Solution1 s1;
	Solution2 s2;
	vector<int> v = { 3,2,4 };
	int target = 6;
	vector<int> ele = s2.twoSums(v, target);
	for (int i = 0; i < ele.size(); i++)
	{
		cout << ele[i] << endl;
	}
	return 0;
}