/*
Input
The first line of the input contains integer number n
 (2≤n≤100) — the length of string s
The second line of the input contains the string s
 consisting of n capital Latin letters.

Output
Print the only line containing exactly two capital Latin letters — any two-gram contained in the given string s
 as a substring (i.e. two consecutive characters of the string) maximal number of times.
*/

#include<iostream>
#include<string>
#include<queue>
using namespace std;

int num;
string a;
queue<int> kkk;

int main()
{
	cin >> num >> a;

	int m = 0;
	int win = 0;

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1; j++)
		{
			if (a[i] == a[j])
			{
				if (a[i + 1] == a[j + 1])
				{
					m++;
				}
			}

		}
		if (m > win)
		{
			win = m;
		}
		kkk.push(m);
		m = 0;

	}
	int s = 0;
	int d = 1;
	for (int p = 0; p < num - 1; p++)
	{
		if (win == kkk.front())
		{
			cout << a[s] << a[d];
			break;
		}
		kkk.pop();
		s++;
		d++;
	}


	return 0;
}
