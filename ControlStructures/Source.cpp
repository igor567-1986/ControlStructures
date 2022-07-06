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
	cout << "Определение комфортны ли условия на улице. " << endl;
	double temperature;
	cout << "Введите температуру:"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло." << endl;
	}
	else
	{
		cout << "На улице холодно. " << endl;
	}
#endif task1
#ifdef task2
	cout << "Попади в цель." << endl;
	int purpose;
	cout << "Введите число:"; cin >> purpose;
	if (0 <= purpose && purpose <= 10)
	{
		cout << "Цель поражена." << endl;
	}
	else
	{
		cout << "Вы промахнулись." << endl;
	}
#endif task2
#ifdef task3
	cout << "Калькулятор." << endl;
	double a, b;
	char operand;
	cout << "Введите выражение:"; cin >> a >> operand >> b;

	switch (operand)
	{
	case '+': cout << a << "+" << b << "=" << a + b; break;
	case '-': cout << a << "-" << b << "=" << a - b; break;
	case '*': cout << a << "*" << b << "=" << a * b; break;
	case '/':
		if (b == 0)
		{
			cout << "Ошибка делить на ноль нельзя." << endl;
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
	double a, b; //Числа, вводимые с клавиатуры
	char s; //Sign - знак операции
	cout << "Введите арифметическое выражение: ";
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
			cout << "Ошибка: нет операции" << endl;
		}
	}while
#endif task_4

	


}