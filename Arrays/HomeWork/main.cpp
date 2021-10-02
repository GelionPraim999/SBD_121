#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define ARR_1
#define CYCLIC_SHIFT

void main()
{
	setlocale(LC_ALL, "");

#ifdef ARR_1
	const int n = 5;
	int arr[n];
	cout << "������� �������� 5 ��������� �������: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << "������ � ������ �������:\t";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	cout << "������ � �������� �������:\t";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;

	cout << "C������ �������������� ��������� �������: " << float(sum) / float(n) << endl;

	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
	cout << "����������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;
#endif

#ifdef CYCLIC_SHIFT
	const int n = 10;
	int arr_1[n] = { 0,1,1,2,3,5,8,13,21,34 };
	int arr_2[n];

	cout << "�������� ������:\t\t";
	for (int i = 0; i < n; i++)
	{
		cout << arr_1[i] << "\t";
	};
	cout << endl << endl;

	int shift;
	cout << "������� �������� ������ (������ ���� - �����, ����� - ������): ";
	cin >> shift;

	for (int i = 0; i < n; i++)
	{
		if (shift > 0) {
			arr_2[i] = (i + shift - n < 0) ? arr_1[i + shift] : arr_1[i + shift - n];
		}
		else {
			arr_2[i] = (i < -shift) ? arr_1[n + shift + i] : arr_1[i + shift];
		}
	};
	cout << endl;

	cout << "������, ��������� �� " << (shift >= 0 ? shift : -shift) << ((shift >= 0) ? " �����:\t" : " ������:\t");
	//(shift >= 0) ? cout << shift << " �����:\t" : cout << -shift << " ������:\t";
	for (int i = 0; i < n; i++)
	{
		cout << arr_2[i] << "\t";
	}
	cout << endl;
#endif
}