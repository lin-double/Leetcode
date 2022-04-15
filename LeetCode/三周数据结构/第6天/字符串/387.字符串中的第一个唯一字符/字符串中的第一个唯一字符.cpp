#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<unordered_map>
using namespace std;

class Solution1 {
public:
	int firstUniqChar(string s)
	{
		int i;
		for ( i = 0; i < s.size()-1; i++)
		{
			char* p1 = &s[i];
			for (int j = i + 1; j < s.size(); j++) {
				char* p2 = &s[j];
				if (strcmp(p1, p2)==0)
				{
					;
				}
			}
			return i;
		}
	}
};
class Solution2 {
public:
	int firstUniqChar(string s)
	{
		unordered_map<char, int> cur;
		for (char ch : s)
		{
			++cur[ch];
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (cur[s[i]] == 1)
			{
				return i;
			}
		}
		return -1;
	}
};
int main()
{
	string s =  "leetcode" ;
	Solution1 S1;
	Solution2 S2;
	cout << S1.firstUniqChar(s) << endl;
	cout << "****************" << endl;
	cout << S2.firstUniqChar(s) << endl;
	return 0;
}
