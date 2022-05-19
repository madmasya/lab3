#include "triangle.h"

using std::cout;
using std::endl;

Triangle::Triangle() : a(0.0f), b(0.0f), c(0.0f) { countofobjects++; }
Triangle::~Triangle() { countofobjects--; }

void Triangle::Square() const
{
	float p = (a + b + c) / 2;
	cout << "������� ������������ ����� " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
}

void Triangle::Perimeter() const
{
	cout << "�������� ������������ ����� " << a + b + c << endl;
}

void Triangle::SetData()
{
	cout << "������� ������� ������������: ";
	a = input<int>(); 		b = input<int>();		c = input<int>();
}

void Triangle::DispData() const
{
	cout << "������� ������������ ����� " << a << " " << b << " " << c << endl;
}

bool Triangle::DiscIn()
{
	std::ifstream is("triangles.txt");
	if (!is)
	{
		cout << "������!";
		return false;
	}

	static size_t cnt = 0;
	int i = 0;

	do
	{
		is >> a >> b >> c;
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

bool Triangle::DiscOut() const
{
	std::ofstream of;
	of.open("triangles.txt", std::ios::app);

	if (!of)
	{
		throw std::string("������ �����!");
		return false;
	}

	of << a << ' ' << b << ' ' << c << endl;

	if (!of)
	{
		throw std::string("������ �� ���������!");
		return false;
	}

	of.close();
	return true;
}