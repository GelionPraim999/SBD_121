//ControlStructures
#include<iostream>
using namespace std;

//#define IF_SIMPLE_CONDITION
//#define TARGET

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef IF_SIMPLE_CONDITION
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� �������" << endl;
	}
#endif // IF_SIMPLE_CONDITION

#ifdef TARGET
	int number;	//�����, �������� � ����������
	cout << "������� �����: "; cin >> number;
	if (number >= 0 && number <= 10)
	{
		cout << "���� ��������" << endl;
	}
	else
	{
		cout << "�� Firefox" << endl;
	}
#endif // TARGET

	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 70)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 50)
	{
		cout << "�� � �������" << endl;
	}
	else if (temperature > 30)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 20)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 0)
	{
		cout << "���������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -20)
	{
		cout << "������� �����" << endl;
	}
}