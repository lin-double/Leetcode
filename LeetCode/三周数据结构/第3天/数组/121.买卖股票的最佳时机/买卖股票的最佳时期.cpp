#include<iostream>
#include<vector>
using namespace std;
//超出时间限制
class Solution1
{
public:
	int maxProfit(vector<int>& prices) {
		int result = 0;
		for (int i = 0; i < prices.size()-1; i++)
		{
			for (int j = i + 1; j < prices.size(); j++)
			{
				int del = prices[j] - prices[i];
				result = result < del ? del : result;
			}
		}
		return result;
	}
};
class Solution2
{
public:
	int maxProfit(vector<int>& prices)
	{
		int insert2= 0;
		for (int insert1 = 0; insert1 < prices.size(); insert1++)
		{
			prices[insert1];
		}
	}
};
int main() {
	vector<int> v = { 1,2};
	Solution1 s1;
	
	cout << s1.maxProfit(v) << endl;
	return 0;
}