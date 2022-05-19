#include "circle.h"

using std::cout;
using std::endl;

const double pi = acos(-1);

	Circle::Circle() : radius(0.0f) { countofobjects++; }
	Circle::~Circle() { countofobjects--; }

	void Circle::Square() const
	{
		cout << "������� ����� ����� " << pi * pow(radius, 2) << endl;
	}

	void Circle::Perimeter() const
	{
		cout << "�������� ����� ����� " << 2 * pi * radius << endl;
	}

	void Circle::SetData() 
	{
		cout << "������� ������ �����: ";
		radius = input<int>();
	}

	void Circle::DispData() const
	{
		cout << "������ ����� ����� " << radius << endl;
	}

	bool Circle::DiscIn()
	{
		std::ifstream is("circles.txt");
		if (!is)
		{
			cout << "������!";
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
			cout << "������!";
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
			throw std::string("������ �����!");
			return false;
		}

		of << radius << endl;

		if (!of)
		{
			throw std::string("������ �� ���������!");
			return false;
		}

		of.close();
		return true;
	}