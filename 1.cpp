#include<iostream>
#include<algorithm>
using namespace std;

int num;
int duan;
int arr[100000];
int arrkkk[99999];

bool cmp(int a, int b);


int main()
{	
	cin >> num >> duan;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}

	for (int j = 0; j < num - 1; j++)
	{
		int x = j + 1;
		arrkkk[j] = arr[x] - arr[j];
	}

	sort(arrkkk, arrkkk + num - 1, cmp);

	int zjc = arr[num - 1] - arr[0];
	for (int p = 0; p < duan - 1; p++)
	{
		zjc = zjc - arrkkk[p];
	}
	cout << zjc;

	// ���ڴ��������Ĵ���
	return 0;
}
bool cmp(int a, int b)///ʵ�ִӴ�С����ıȽϺ���
{
	return a > b;
}
