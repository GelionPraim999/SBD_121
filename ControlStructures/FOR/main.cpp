#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;	//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	for (
		int i = 0; //Counter (Start)
		i < n;  //Condition (Stop)
		i++)	//Expression (Step)
	{
		cout << i << "\t";
	}
	cout << endl; true;
}