#include<iostream>
#include<vector>
using namespace std;

class Solution1 {
public:
	int maxSubArray(vector<int>& nums) {
		int sum = 0;
		int Maxsum=INT_MIN ;
		for (int i = 0; i < nums.size(); i++)
		{
			sum = 0;
			for (int j = i; j < nums.size(); j++) {
				sum += nums[j];
				int maxsum = sum - nums[j];
				Maxsum = Maxsum < sum ? sum : Maxsum;
			}
		}
		return Maxsum;
	}
};

class Solution2 {
public:
	int maxSubArray(vector<int>& nums)
	{
		int sum = 0;
		int Maxsum = INT_MIN;
		for (int i = 0; i < nums.size(); i++)
		{
			sum += nums[i];
			if (sum > Maxsum)
			{
				Maxsum = sum;
			}
			if (sum <= 0) {
				sum = 0;
			}
		}
		return Maxsum;
	}
};
int main()
{
	Solution1 S1;
	Solution2 S2;
	vector<int> v = { -2,1,-3,4,-1,2,1,-5,4 };
	cout << S1.maxSubArray(v) << endl;
	cout << S2.maxSubArray(v) << endl;
	return 0;
}
