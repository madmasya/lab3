#include <iostream>
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include "safeInput.h"
#include "triangle.h"
#include "trapeze.h"
#include "rect.h"
#include "circle.h"
#include "shapes.h"

#define CUROBJSET ( mas[Shapes::countofobjects]->SetData() )
#define CUROBJDISP ( mas[Shapes::countofobjects]->DispData() )
#define CUROBJDIN ( mas[Shapes::countofobjects]->DiscIn() )
#define CUROBJDOUT ( mas[Shapes::countofobjects]->DiscOut() )
#define CUROBJSQ ( mas[Shapes::countofobjects]->Square() )
#define CUROBJPER ( mas[Shapes::countofobjects]->Perimeter() )

using std::cout;
using std::cin;
using std::endl;

size_t Shapes::countofobjects = 0;

int main()
{
	system("chcp 1251");
	Shapes** mas = nullptr;
	system("cls");
	cout << "������� ���������� �������� ";
	size_t num = input<size_t>();
	mas = new Shapes * [num];

	char choice;
	bool exit = false;

	while (exit != true)
	{
		system("cls");
		cout << "����� ������ �� ������ �������?\n" << "1) ����\n" << "2) �������������\n" << "3) ��������\n" << "4) �����������\n\n" << "0 - �����\n";
		choice = _getch();
		switch (choice)
		{
		case '1':
		{
			char choiceCircle = '1';
			bool initialized = false;
			system("cls");

			if (Shapes::countofobjects < num)
			{
				mas[Shapes::countofobjects] = new Circle;
				cout << "������ ���� ������� ������!\n";
				system("pause");
				system("cls");
			}
			else
			{
				cout << "������ �������� ���������!\n";
				system("pause");
				choiceCircle = '0';
			}

			while (choiceCircle != '0')
			{
				system("cls");
				cout << "===����===\n�������� ��������:\n" << "1) ������������������� ������ � ����������\n" << "2) �������� ������ ������� � ����\n" << "3) ������� ������ �� ����� � ������\n"
					<< "4) ��������� �������� �������\n" << "5) ��������� ������� �������\n" << "0) �����\n";
				choiceCircle = _getch();
				switch (choiceCircle)
				{
				case '1':
				{
					system("cls");
					if (initialized != true)
						CUROBJSET;
					else cout << "������ ��� ������������������!\n";
					CUROBJDISP;
					initialized = true;
					system("pause");
					break;
				}
				case '2':
				{
					system("cls");
					if (initialized == true)
					{
						CUROBJDOUT;
						cout << "������ � ���� �����������!\n";
					}
					else
						cout << "������ �����������������!\n";
					system("pause");
					break;
				}
				case '3':
				{
					system("cls");
					if (initialized != true)
					{
						if (CUROBJDIN == true)
						{
							cout << "������ �� ����� ������� �������!\n";
							CUROBJDISP;
						}
						else cout << "������ ������!";
						initialized = true;
					}

					else cout << "������ ��� ������������������!\n";
					system("pause");
					break;
				}
				case '4':
				{
					system("cls");
					if (initialized == true)
						CUROBJPER;
					else cout << "������ �� ������������������!\n";
					system("pause");
					break;
				}
				case '5':
				{
					system("cls");
					if (initialized == true)
						CUROBJSQ;
					else cout << "������ �� ������������������!\n";
					system("pause");
					break;
				}
				case '0':
				{
					break;
				}
				default:
				{
					system("cls");
					cout << "�������� ����!\n";
					system("pause");
					break;
				}
				}
			}
			break;
		}
		case '2':
		{
			char choiceRectangle = '1';
			bool initialized = false;
			system("cls");

			if (Shapes::countofobjects < num)
			{
				mas[Shapes::countofobjects] = new Rect;
				cout << "������ ������������� ������� ������!\n";
				system("pause");
				system("cls");
			}
			else
			{
				cout << "������ �������� ���������!\n";
				system("pause");
				choiceRectangle = '0';
			}

			while (choiceRectangle != '0')
			{
				system("cls");
				cout << "===�������������===\n�������� ��������:\n" << "1) ������������������� ������ � ����������\n" << "2) �������� ������ ������� � ����\n" << "3) ������� ������ �� ����� � ������\n"
					<< "4) ��������� �������� �������\n" << "5) ��������� ������� �������\n" << "0) �����\n";
				choiceRectangle = _getch();
				switch (choiceRectangle)
				{
				case '1':
				{
					system("cls");
					if (initialized != true)
						CUROBJSET;
					else cout << "������ ��� ������������������!\n";
					CUROBJDISP;
					initialized = true;
					system("pause");
					break;
				}
				case '2':
				{
					system("cls");
					if (initialized == true)
					{
						CUROBJDOUT;
						cout << "������ � ���� �����������!\n";
					}
					else
						cout << "������ �����������������!\n";
					system("pause");
					break;
				}
				case '3':
				{
					system("cls");
					if (initialized != true)
					{
						if (CUROBJDIN == true)
						{
							cout << "������ �� ����� ������� �������!\n";
							CUROBJDISP;
						}
						else cout << "������ ������!";
						initialized = true;
					}
					else cout << "������ ��� ������������������!\n";
					system("pause");
					break;
				}
				case '4':
				{
					system("cls");
					if (initialized == true)
						CUROBJPER;
					else cout << "������ �� ������������������!\n";
					system("pause");
					break;
				}
				case '5':
				{
					system("cls");
					if (initialized == true)
						CUROBJSQ;
					else cout << "������ �� ������������������!\n";
					system("pause");
					break;
				}
				case '0':
				{
					break;
				}
				default:
				{
					system("cls");
					cout << "�������� ����!\n";
					system("pause");
					break;
				}
				}
			}
			break;
		}
		case '3':
		{
			char choiceTrapeze = '1';
			bool initialized = false;
			system("cls");

			if (Shapes::countofobjects < num)
			{
				mas[Shapes::countofobjects] = new Trapeze;
				cout << "������ �������� ������� ������!\n";
				system("pause");
				system("cls");
			}
			else
			{
				cout << "������ �������� ���������!\n";
				system("pause");
				choiceTrapeze = '0';
			}

			while (choiceTrapeze != '0')
			{
				system("cls");
				cout << "===��������===\n�������� ��������:\n" << "1) ������������������� ������ � ����������\n" << "2) �������� ������ ������� � ����\n" << "3) ������� ������ �� ����� � ������\n"
					<< "4) ��������� �������� �������\n" << "5) ��������� ������� �������\n" << "0) �����\n";
				choiceTrapeze = _getch();
				switch (choiceTrapeze)
				{
				case '1':
				{
					system("cls");
					if (initialized != true)
						CUROBJSET;
					else cout << "������ ��� ������������������!\n";
					CUROBJDISP;
					initialized = true;
					system("pause");
					break;
				}
				case '2':
				{
					system("cls");
					if (initialized == true)
					{
						CUROBJDOUT;
						cout << "������ � ���� �����������!\n";
					}
					else
						cout << "������ �����������������!\n";
					system("pause");
					break;
				}
				case '3':
				{
					system("cls");
					if (initialized != true)
					{
						if (CUROBJDIN == true)
						{
							cout << "������ �� ����� ������� �������!\n";
							CUROBJDISP;	
						}
						else cout << "������ ������!";
						initialized = true;
					}
					else cout << "������ ��� ������������������!\n";
					system("pause");
					break;
				}
				case '4':
				{
					system("cls");
					if (initialized == true)
						CUROBJPER;
					else cout << "������ �� ������������������!\n";
					system("pause");
					break;
				}
				case '5':
				{
					system("cls");
					if (initialized == true)
						CUROBJSQ;
					else cout << "������ �� ������������������!\n";
					system("pause");
					break;
				}
				case '0':
				{
					break;
				}
				default:
				{
					system("cls");
					cout << "�������� ����!\n";
					system("pause");
					break;
				}
				}
			}
			break;
		}
		case '4':
		{
			char choiceTriangle = '1';
			bool initialized = false;
			system("cls");

			if (Shapes::countofobjects < num)
			{
				mas[Shapes::countofobjects] = new Triangle;
				cout << "������ �������� ������� ������!\n";
				system("pause");
				system("cls");
			}
			else
			{
				cout << "������ �������� ���������!\n";
				system("pause");
				choiceTriangle = '0';
			}

			while (choiceTriangle != '0')
			{
				system("cls");
				cout << "===�����������===\n�������� ��������:\n" << "1) ������������������� ������ � ����������\n" << "2) �������� ������ ������� � ����\n" << "3) ������� ������ �� ����� � ������\n"
					<< "4) ��������� �������� �������\n" << "5) ��������� ������� �������\n" << "0) �����\n";
				choiceTriangle = _getch();
				switch (choiceTriangle)
				{
				case '1':
				{
					system("cls");
					if (initialized != true)
						CUROBJSET;
					else cout << "������ ��� ������������������!\n";
					CUROBJDISP;
					initialized = true;
					system("pause");
					break;
				}
				case '2':
				{
					system("cls");
					if (initialized == true)
					{
						CUROBJDOUT;
						cout << "������ � ���� �����������!\n";
					}
					else
						cout << "������ �����������������!\n";
					system("pause");
					break;
				}
				case '3':
				{
					system("cls");
					if (initialized != true)
					{
						CUROBJDIN;
						cout << "������ �� ����� ������� �������!\n";
						CUROBJDISP;
						initialized = true;
					}
					else cout << "������ ��� ������������������!\n";
					system("pause");
					break;
				}
				case '4':
				{
					system("cls");
					if (initialized == true)
						CUROBJPER;
					else cout << "������ �� ������������������!\n";
					system("pause");
					break;
				}
				case '5':
				{
					system("cls");
					if (initialized == true)
						CUROBJSQ;
					else cout << "������ �� ������������������!\n";
					system("pause");
					break;
				}
				case '0':
				{
					break;
				}
				default:
				{
					system("cls");
					cout << "�������� ����!\n";
					system("pause");
					break;
				}
				}
			}
			break;
		}
		case '0':
		{
			exit = true;
			break;
		}
		default:
		{
			system("cls");
			cout << "�������� ����!\n";
			system("pause");
			break;
		}
		}
	}
	system("cls");
	cout << "�� ��������!\n";
	return 0;
}