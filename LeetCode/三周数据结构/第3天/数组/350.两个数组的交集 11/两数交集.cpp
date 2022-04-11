#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
using namespace std;

//349.��������Ľ���
class Solution1 {
public:
	vector<int>intersect(vector<int> &nums1, vector<int> &nums2) {
		unordered_set<int> result;
		unordered_set<int> nums(nums1.begin(), nums1.end());
		for (int x : nums2) {
			if (nums.find(x) != nums.end())
			{
				result.insert(x);
			}
		}
		return { result.begin(), result.end() };
	}
};
//��ϣ��
class Solution2
{
public:
	vector<int>intersect(vector<int> &nums1, vector<int>&nums2)
	{
		if (nums1.size() < nums2.size())
		{
			return intersect(nums2, nums1);
		}
		unordered_map<int, int> m;
		for (int num : nums1)
		{
			//num��key,m[key]��key��Ӧ��ֵ���ҵ�һ����1
			++m[num];
		}
		vector<int> vec;
		for (int num : nums2)
		{
			if (m.count(num))
			{
				vec.push_back(num);
				--m[num];
				if (m[num] == 0)
				{
					m.erase(num);
				}
			}
		}
		return vec;
	}
};
//����˫ָ��
class Solution3
{
	vector<int> intersect(vector<int>&nums1, vector<int>&nums2)
	{
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
		int length1 = nums1.size();
		int length2 = nums2.size();
		vector<int> vec;
		int insect1 = 0;
		int insect2 = 0;
		while (insect1 < length1&&insect2 < length2)
		{
			if (nums1[insect1] < nums2[insect2])
			{
				insect1++;
			}
			else if (nums1[insect1] > nums2[insect2])
			{
				insect2++;
			}
			else
			{
				vec.push_back(nums1[insect1]);
				insect1++;
				insect2++;
			}
		}
		return vec;
	}
};
int main()
{
	return 0;
}