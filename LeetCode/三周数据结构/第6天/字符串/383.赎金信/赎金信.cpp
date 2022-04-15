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
		//�洢����Ϊ��ĸ�ĸ���
		vector<int>cnt(26);
		//auto�Զ��Ƶ�c������
		for (auto &c : magazine)
		{
			cnt[c - 'a']++;//c-'a'Ϊ���������ֵ��
		}
		for (auto&c : ransomNote)
		{
			cnt[c - 'a']--;//�ҵ�һ����ͬ����ĸ��--
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