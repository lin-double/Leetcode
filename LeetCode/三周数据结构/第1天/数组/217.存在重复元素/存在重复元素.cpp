#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_set>
using namespace std;
//暴力解法
class Solution1 {
public:
	bool containsDuplicate(vector<int>& nums) {
		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i + 1; j < nums.size(); j++) {
				if (nums[i] == nums[j])
				{
					return true;
					break;
				}
			}
		}
		return false;
	}

};
//排序
class Solution2 {
public:
	bool containsDuplicate(vector<int> &nums)
	{
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (nums[i] == nums[i + 1])
			{
				return true;
			}
		}
		return false;
	}
};
//哈希表
class Solution3 {
public:
	bool containsDuplicate(vector<int>&nums)
	{
		unordered_set<int> s;
		for (int x : nums)
		{
			if (s.find(x) != s.end())
			{
				return true;
			}
			s.insert(x);
		}
		return false;
	}
};
int main()
{
	vector<int> v = { 1,2,3,5,6,4,5,2,5,2,2,45,2,2,35,2,23};
	Solution1 S1;
	Solution2 S2;
	Solution3 S3;
	/*for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}*/
	cout<< boolalpha <<S3.containsDuplicate(v);
	//printf("%d\n", S.containsDuplicate(v));
	return 0;
}