#include "rect.h"

using std::cout;
using std::endl;

Rect::Rect() : a(0.0f), b(0.0f) { countofobjects++; }
Rect::~Rect() { countofobjects--; }

void Rect::Square() const
{
	cout << "Площадь прямоугольника равна " << a * b << endl;
}

void Rect::Perimeter() const
{
	cout << "Периметр прямоугольника равен " << 2 * (a + b) << endl;
}

void Rect::SetData()
{
	cout << "Введите стороны прямоугольника: ";
	a = input<int>(); 		b = input<int>();
}

void Rect::DispData() const
{
	cout << "Стороны прямоугольника равны " << a << " " << b << endl;
}

bool Rect::DiscIn()
{
	std::ifstream is("rectangles.txt");
	if (!is)
	{
		cout << "Ошибка!";
		return false;
	}


	static size_t cnt = 0;
	int i = 0;

	do
	{
		is >> a >> b;
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

bool Rect::DiscOut() const 
{
	std::ofstream of;
	of.open("rectangles.txt", std::ios::app);

	if (!of)
	{
		throw std::string("Ошибка файла!");
		return false;
	}

	of << a << ' ' << b << endl;

	if (!of)
	{
		throw std::string("Запись не завершена!");
		return false;
	}

	of.close();
	return true;
}