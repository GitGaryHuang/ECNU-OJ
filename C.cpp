/*
�����ʽ
n (1��n��20)����ʾ n ������

������һ�� n ������������С������ 104��

�����ʽ
ƴ�ɵ��ʱ�䡣
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

//Ҫ����534 53��536 53���������������Ҫ���еݹ�Ƚϣ����ܵ������ݳ��ȱȽϡ�
//sort��cmp���������ԭ���ο�https://www.2cto.com/kf/201208/151993.html
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