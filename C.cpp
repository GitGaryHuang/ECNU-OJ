/*
输入格式
n (1≤n≤20)，表示 n 个数。

接下来一行 n 个正整数，大小不超过 104。

输出格式
拼成的最长时间。
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

//要考虑534 53和536 53这类特殊情况，需要进行递归比较，不能单纯根据长度比较。
//sort中cmp函数的深层原理。参考https://www.2cto.com/kf/201208/151993.html
bool cmp(string a, string b)
{
	int l1 = a.length();
	
	int l2 = b.length();
	if (l1 == l2)
		return a > b;
	else if (l1 > l2)
	{
		int l = l2;
		string c = a.substr(0, l);
		if (b == c)
		{
			string d = a.substr(0, l);
			return cmp(d, c);
			
		}
		else
		{
			if (c > b)
				return true;
			else
				return false;
		}
	}
	else 
	{
		int l = l1;
		string c = b.substr(0, l);
		if (a == c)
		{
			string d = b.substr(l);
			return cmp(c, d);
		}
			
		else
		{
			if (a > c)
				return true;
			else
				return false;
		}
			
	}

}

int main()
{
	int n;
	string arr[20];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n, cmp);
	for (int i = 0; i < n; i++)
		cout << arr[i];


}