#include "circle.h"

using std::cout;
using std::endl;

const double pi = acos(-1);

	Circle::Circle() : radius(0.0f) { countofobjects++; }
	Circle::~Circle() { countofobjects--; }

	void Circle::Square() const
	{
		cout << "Площадь круга равна " << pi * pow(radius, 2) << endl;
	}

	void Circle::Perimeter() const
	{
		cout << "Периметр круга равен " << 2 * pi * radius << endl;
	}

	void Circle::SetData() 
	{
		cout << "Введите радиус круга: ";
		radius = input<int>();
	}

	void Circle::DispData() const
	{
		cout << "Радиус круга равен " << radius << endl;
	}

	bool Circle::DiscIn()
	{
		std::ifstream is("circles.txt");
		if (!is)
		{
			cout << "Ошибка!";
			return false;
		}

		static size_t cnt = 0;
		int i = 0;

		do
		{
			is >> radius;
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

	bool Circle::DiscOut() const
	{
		std::ofstream of;
		of.open("circles.txt", std::ios::app);

		if (!of)
		{
			throw std::string("Ошибка файла!");
			return false;
		}

		of << radius << endl;

		if (!of)
		{
			throw std::string("Запись не завершена!");
			return false;
		}

		of.close();
		return true;
	}