#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;//SIZE
	int arr[n] = { 3, 5, 8 };
	//n-1 ��� SIZE-1
	cout << "������� �������� ��������� (5 �����):";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}