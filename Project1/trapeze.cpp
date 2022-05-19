#include "trapeze.h"

using std::cout;
using std::endl;

Trapeze::Trapeze() : a(0.0f), b(0.0f), c(0.0f), d(0.0f), height(0.0f) { countofobjects++; }
Trapeze::~Trapeze() { countofobjects--; }

void Trapeze::Square() const
{
	cout << "������� �������� ����� " << height * (a + b) / 2 << endl;
}

void Trapeze::Perimeter() const
{
	cout << "�������� �������� ����� " << a + b + c + d << endl;
}

void Trapeze::SetData()
{
	cout << "������� ������� ��������: ";
	a = input<int>(); 		b = input<int>();		c = input<int>(); 		d = input<int>();
	cout << "\n������� ������ ��������: ";
	height = input<int>();
}

void Trapeze::DispData() const
{
	cout << "������� �������� ����� " << a << " " << b << " " << c << " " << d << endl;
	cout << "������ ����� " << height << endl;;
}

bool Trapeze::DiscIn()
{
	std::ifstream is("trapezes.txt");
	if (!is)
	{
		cout << "������!";
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
		cout << "������!";
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
		cout << "������ �����!";
		return false;
	}

	of << a << ' ' << b << ' ' << c << ' ' << d << ' ' << height << endl;

	if (!of)
	{
		cout << "������ �� ���������!";
		return false;
	}

	of.close();
	return true;
}