/*
输入格式
三个整数 m, n, k (1≤m,n≤150,1≤k≤4000)，分别表示男士人数、女士人数、几轮舞曲。

输出格式
输出各轮舞曲的配对方案。
*/
//无难点
#include<iostream>
using namespace std;

int main()
{
	int m, n, k;
	cin >> m >> n >> k;
	for (int i = 0; i < k; i++)
		cout << i % m + 1 << " " << i % n + 1 << endl;

	return 0;
}