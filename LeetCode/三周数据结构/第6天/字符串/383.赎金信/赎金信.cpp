#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;
//bool canConstruct(string ransomNote, string magazine)
class Solution1 {
public: 
	bool canConstruct(string ransomNote, string magazine)
	{
		if (ransomNote.size() > magazine.size())
		{
			return false;
		}
		//存储内容为字母的个数
		
		vector<int>cnt(26);
		//auto自动推导c的类型
		for (auto &c : magazine)
		{
			cnt[c - 'a']++;//c-'a'为数组的索引值，
		}
		for (auto&c : ransomNote)
		{
			cnt[c - 'a']--;//找到一个相同的字母就--
			if (cnt[c - 'a'] < 0)
			{
				return false;
			}
		}
		return true;
	}
};
int main() {
	Solution1 s1;
	string maga = "aab";
	string ran = "aa";
	s1.canConstruct(ran, maga);
	return 0;
}
