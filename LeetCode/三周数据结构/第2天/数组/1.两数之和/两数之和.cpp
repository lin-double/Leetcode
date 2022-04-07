#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
//ͨ��
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
//ʱ�临�Ӷȣ�O(N ^ 2)������ N �������е�Ԫ��������������������������������Ҫ��ƥ��һ�Ρ�
//�ռ临�Ӷȣ�O(1)��
class Solution2 {
public:
	vector<int> twoSums(vector<int>&nums, int target)
	{
		int n = nums.size();
		for (int i = 0; i < n-1; i++)
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