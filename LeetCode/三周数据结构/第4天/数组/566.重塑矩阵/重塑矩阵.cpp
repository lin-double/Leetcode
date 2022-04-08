#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
	vector<vector<int>>matrixReshape(vector<vector<int>>& mat, int r, int c)
	{
		vector<vector<int>> vec(r, vector<int>(c));
		int m = mat.size();
		int n = mat[0].size();
		if (m*n != r * c)
		{
			return mat;
		}
		for (int i = 0; i < m*n; i++)
		{
				vec[i / c][i%c] = mat[i / n][i%n];
		}
		
		return vec;
	}
};
int main()
{
	Solution S;
	vector<vector<int>> mat = { {1, 2},{3, 4} };
	vector<vector<int>>vec = S.matrixReshape(mat,1,4);
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			cout << vec[i][j]<<" ";
		}
	}
	return 0;
}