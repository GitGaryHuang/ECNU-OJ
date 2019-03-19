/*
输入格式
输入文件共一行，包含一个正整数 n (1≤n≤20)。

输出格式
输出文件共 n 行，即星空的前 n 行。每行包含若干正整数，这些正整数之间用一个空格隔开（不能有多余的空格），最后一个正整数后面没有空格。
*/
//杨辉三角简易版

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	const int p = n;
	int a[20][20] = { 0 };
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++)
		{
			if (i == j)
			{
				a[i][j] = 1;
				cout << a[i][j] << endl;
			}
			else if (j == 0)
			{
				a[i][j] = 1;
				cout << a[i][j] << " ";
			}
			else
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
				cout << a[i][j] << " ";
			}
		}

	return 0;
}