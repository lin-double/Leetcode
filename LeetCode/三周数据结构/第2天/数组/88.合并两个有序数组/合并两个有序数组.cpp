#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Í¨¹ý
class Solution1 {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
	{
		for (int i = m ; i < n+m; i++)
		{
			nums1[i] = nums2[i-m];
		}
		sort(nums1.begin(),nums1.end());
	}
};


int main()
{
	Solution1 s1;
	vector<int> v1 = { 1,2,3,0,0,0 };
	vector<int> v2 = { 2,5,6 };
	int m = 3;
	int n = 3;
	s1.merge(v1, m, v2, n);
	int c = v1.size();
	for (int i = 0; i < c; i++)
	{
		cout << v1[i] << " " ;
	}
	return 0;
}
