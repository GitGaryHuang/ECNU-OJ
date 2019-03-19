/*
输入格式
N，M：表示 N 行 M 列，馅饼的尺寸大小。

以下 N 行 M 列为馅饼每个格子的美味值。

输入中所有数是不超过 100 的正整数。

输出格式
一个正整数，表示红烧肉最多能有多好吃。
*/
// 每行最大值求和
#include<iostream>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	int max[100] = { 0 };
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int temp;
			cin >> temp;
			if (temp > max[i])
			{
				max[i] = temp;
			}
		}
		sum += max[i];
	}

	cout << sum;

	return 0;

}