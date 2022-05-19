#include "trapeze.h"

using std::cout;
using std::endl;

Trapeze::Trapeze() : a(0.0f), b(0.0f), c(0.0f), d(0.0f), height(0.0f) { countofobjects++; }
Trapeze::~Trapeze() { countofobjects--; }

void Trapeze::Square() const
{
	cout << "Площадь трапеции равна " << height * (a + b) / 2 << endl;
}

void Trapeze::Perimeter() const
{
	cout << "Периметр трапеции равен " << a + b + c + d << endl;
}

void Trapeze::SetData()
{
	cout << "Введите стороны трапеции: ";
	a = input<int>(); 		b = input<int>();		c = input<int>(); 		d = input<int>();
	cout << "\nВведите высоту трапеции: ";
	height = input<int>();
}

void Trapeze::DispData() const
{
	cout << "Стороны трапеции равны " << a << " " << b << " " << c << " " << d << endl;
	cout << "Высота равна " << height << endl;;
}

bool Trapeze::DiscIn()
{
	std::ifstream is("trapezes.txt");
	if (!is)
	{
		cout << "Ошибка!";
		return false;
	}

	static size_t cnt = 0;
	int i = 0;

	do
	{
		is >> a >> b >> c >> d >> height;
		i++;
	} while (i <= cnt);

	if (!is)
	{
		cout << "Ошибка!";
		return false;
	}

	cnt++;
	is.close();
	return true;
}

bool Trapeze::DiscOut() const
{
	std::ofstream of;
	of.open("trapezes.txt", std::ios::app);

	if (!of)
	{
		cout << "Ошибка файла!";
		return false;
	}

	of << a << ' ' << b << ' ' << c << ' ' << d << ' ' << height << endl;

	if (!of)
	{
		cout << "Запись не завершена!";
		return false;
	}

	of.close();
	return true;
}