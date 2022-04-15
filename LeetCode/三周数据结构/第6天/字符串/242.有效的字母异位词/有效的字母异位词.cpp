#include<iostream>
#include<vector>
#include<string>
using namespace std;
//bool isAnagram(string s, string t)
//ͨ��
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
			//����ͬ���ַ��϶����0��������С��0����Ϊt���Ԫ�ػ�û��ͳ��
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