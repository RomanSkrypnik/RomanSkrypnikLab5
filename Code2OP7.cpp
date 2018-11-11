// ConsoleApplication38.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>


int f1();
int f2();


int main()
{
	using namespace std;
	f1();
	f2();
	if (f1 > f2) {
		cout << "f1=\n"<<f1<<endl;
	}
	else if (f1 == f2) {
		cout << "f1=\n" << f1 << "f2=\n" << f2 << endl;
	}
	else {
		cout << "f2=\n" << f2 << endl;
	}
	system("pause");
	return 0;
}
int f1()
{
	using namespace std;
	float b, x, y, alpha, e,dodatok;
	cout << "Input x\n";
	cin >> x;
	cout << "Input y\n";
	cin >> y;
	cout << "Input alpha\n";
	cin >> alpha;
	cout << "Input e\n";
	cin >> e;
	dodatok = pow(x*x - 10 * y, 1.0 / 3.0);
	if (dodatok < 0) {
		cout << "Dodatok can't be 0,because pow confirms only positive numbers"; //Через те, що pow приймає тільки позитивні числа, було поставлено ОДЗ
	}
	else {
		b = dodatok+abs(x + y) - cos(alpha) * sin(alpha + 0.296706) + pow(e, 3); //0.296706-17 градусов в радианах
		cout << "The result is\n" << b << endl;
	}
	system("pause");
	return 0;
}




int f2()
{
	using namespace std;
	float a, x, y, z, e, znamenatel, chislitel, dodatok;
	cout << "Input x\n";
	cin >> x;
	cout << "Input y\n";
	cin >> y;
	cout << "Input z\n";
	cin >> z;
	cout << "Input e\n";
	cin >> e;
	chislitel = pow(3 * x*x + 10 * x - 17, 1.0 / 2.0);
	znamenatel = abs(pow(y, 3) - 3);
	if (znamenatel == 0) {
		cout << "The determinator is 0.Impossible";
	}
	else {
		dodatok = pow(7 * x / x, 1.0 / 5.0) + pow(e, 2 + x);
		a = chislitel / znamenatel + dodatok;

		cout << "The result is\n" << a << endl;
	}
	system("pause");
	return 0;
	
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
