#include<iostream>
#include<vector>
#include<string>
using namespace std;
//bool isAnagram(string s, string t)
//通过
class Solution1 {
public:
	bool isAnagram(string s, string t)
	{
		if (s.size() != t.size())
		{
			return false;
		}
		vector<int> cnt(26);
		for (auto&c : s)
		{
			cnt[c - 'a']++;
		}
		for (auto&c : t) {
			cnt[c - 'a']--;
			//不相同的字符肯定会从0减，导致小于0；因为t里的元素还没被统计
			if (cnt[c - 'a'] < 0)
			{
				return false;
			}
		}
	/*	for (int i = 0; i < cnt.size(); i++)
		{
			if (cnt[i] != 0)
			{
				return false;
			}
		}*/
		return true;
	}
};
int main() {
	Solution1 s1;
	string s = "anaam";
	string t = "nagar";
	cout << boolalpha << s1.isAnagram(s, t) << endl;
	return 0;
}