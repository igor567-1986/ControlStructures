#include <iostream>
using namespace std;
//#define task1
//#define task2
//#define task3
#define task_4

void main()
{
	setlocale(LC_ALL, "");
#ifdef task1
	cout << "����������� ��������� �� ������� �� �����. " << endl;
	double temperature;
	cout << "������� �����������:"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����." << endl;
	}
	else
	{
		cout << "�� ����� �������. " << endl;
	}
#endif task1
#ifdef task2
	cout << "������ � ����." << endl;
	int purpose;
	cout << "������� �����:"; cin >> purpose;
	if (0 <= purpose && purpose <= 10)
	{
		cout << "���� ��������." << endl;
	}
	else
	{
		cout << "�� ������������." << endl;
	}
#endif task2
#ifdef task3
	cout << "�����������." << endl;
	double a, b;
	char operand;
	cout << "������� ���������:"; cin >> a >> operand >> b;

	switch (operand)
	{
	case '+': cout << a << "+" << b << "=" << a + b; break;
	case '-': cout << a << "-" << b << "=" << a - b; break;
	case '*': cout << a << "*" << b << "=" << a * b; break;
	case '/':
		if (b == 0)
		{
			cout << "������ ������ �� ���� ������." << endl;
		}
		else
		{
			cout << a << "/" << b << "=" << a / b;
		}
		break;
	default: cout << "Error: No operation." << endl;
	}



#endif task3
#ifdef task_4
	double a, b; //�����, �������� � ����������
	char s; //Sign - ���� ��������
	cout << "������� �������������� ���������: ";
	cin >> a >> s >> b;
	//cout << a << s << b << endl;
	do
	{
		if (s == '+')
		{
			cout << a << " + " << b << " = " << a + b << endl;
		}
		else if (s == '-')
		{
			cout << a << " - " << b << " = " << a - b << endl;
		}
		else if (s == '*')
		{
			cout << a << " * " << b << " = " << a * b << endl;
		}
		else if (s == '/')
		{
			cout << a << " / " << b << " = " << a / b << endl;
		}
		else
		{
			cout << "������: ��� ��������" << endl;
		}
	}while
#endif task_4

	


}