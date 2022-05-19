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
	cout << "Введите количество объектов ";
	size_t num = input<size_t>();
	mas = new Shapes * [num];

	char choice;
	bool exit = false;

	while (exit != true)
	{
		system("cls");
		cout << "Какую фигуру вы хотите создать?\n" << "1) Круг\n" << "2) Прямоугольник\n" << "3) Трапеция\n" << "4) Треугольник\n\n" << "0 - Выход\n";
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
				cout << "Объект Круг успешно создан!\n";
				system("pause");
				system("cls");
			}
			else
			{
				cout << "Предел объектов достигнут!\n";
				system("pause");
				choiceCircle = '0';
			}

			while (choiceCircle != '0')
			{
				system("cls");
				cout << "===Круг===\nВыберите действие:\n" << "1) Проинициализировать объект с клавиатуры\n" << "2) Записать данные объекта в файл\n" << "3) Считать данные из файла в объект\n"
					<< "4) Посчитать периметр объекта\n" << "5) Посчитать площадь объекта\n" << "0) Выход\n";
				choiceCircle = _getch();
				switch (choiceCircle)
				{
				case '1':
				{
					system("cls");
					if (initialized != true)
						CUROBJSET;
					else cout << "Объект уже проинициализирован!\n";
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
						cout << "Запись в файл произведена!\n";
					}
					else
						cout << "Объект неинициализирован!\n";
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
							cout << "Данные из файла успешно считаны!\n";
							CUROBJDISP;
						}
						else cout << "Ошибка чтения!";
						initialized = true;
					}

					else cout << "Объект уже проинициализирован!\n";
					system("pause");
					break;
				}
				case '4':
				{
					system("cls");
					if (initialized == true)
						CUROBJPER;
					else cout << "Объект не проинициализирован!\n";
					system("pause");
					break;
				}
				case '5':
				{
					system("cls");
					if (initialized == true)
						CUROBJSQ;
					else cout << "Объект не проинициализирован!\n";
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
					cout << "Неверный ввод!\n";
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
				cout << "Объект Прямоугольник успешно создан!\n";
				system("pause");
				system("cls");
			}
			else
			{
				cout << "Предел объектов достигнут!\n";
				system("pause");
				choiceRectangle = '0';
			}

			while (choiceRectangle != '0')
			{
				system("cls");
				cout << "===Прямоугольник===\nВыберите действие:\n" << "1) Проинициализировать объект с клавиатуры\n" << "2) Записать данные объекта в файл\n" << "3) Считать данные из файла в объект\n"
					<< "4) Посчитать периметр объекта\n" << "5) Посчитать площадь объекта\n" << "0) Выход\n";
				choiceRectangle = _getch();
				switch (choiceRectangle)
				{
				case '1':
				{
					system("cls");
					if (initialized != true)
						CUROBJSET;
					else cout << "Объект уже проинициализирован!\n";
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
						cout << "Запись в файл произведена!\n";
					}
					else
						cout << "Объект неинициализирован!\n";
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
							cout << "Данные из файла успешно считаны!\n";
							CUROBJDISP;
						}
						else cout << "Ошибка чтения!";
						initialized = true;
					}
					else cout << "Объект уже проинициализирован!\n";
					system("pause");
					break;
				}
				case '4':
				{
					system("cls");
					if (initialized == true)
						CUROBJPER;
					else cout << "Объект не проинициализирован!\n";
					system("pause");
					break;
				}
				case '5':
				{
					system("cls");
					if (initialized == true)
						CUROBJSQ;
					else cout << "Объект не проинициализирован!\n";
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
					cout << "Неверный ввод!\n";
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
				cout << "Объект Трапеция успешно создан!\n";
				system("pause");
				system("cls");
			}
			else
			{
				cout << "Предел объектов достигнут!\n";
				system("pause");
				choiceTrapeze = '0';
			}

			while (choiceTrapeze != '0')
			{
				system("cls");
				cout << "===Трапеция===\nВыберите действие:\n" << "1) Проинициализировать объект с клавиатуры\n" << "2) Записать данные объекта в файл\n" << "3) Считать данные из файла в объект\n"
					<< "4) Посчитать периметр объекта\n" << "5) Посчитать площадь объекта\n" << "0) Выход\n";
				choiceTrapeze = _getch();
				switch (choiceTrapeze)
				{
				case '1':
				{
					system("cls");
					if (initialized != true)
						CUROBJSET;
					else cout << "Объект уже проинициализирован!\n";
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
						cout << "Запись в файл произведена!\n";
					}
					else
						cout << "Объект неинициализирован!\n";
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
							cout << "Данные из файла успешно считаны!\n";
							CUROBJDISP;	
						}
						else cout << "Ошибка чтения!";
						initialized = true;
					}
					else cout << "Объект уже проинициализирован!\n";
					system("pause");
					break;
				}
				case '4':
				{
					system("cls");
					if (initialized == true)
						CUROBJPER;
					else cout << "Объект не проинициализирован!\n";
					system("pause");
					break;
				}
				case '5':
				{
					system("cls");
					if (initialized == true)
						CUROBJSQ;
					else cout << "Объект не проинициализирован!\n";
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
					cout << "Неверный ввод!\n";
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
				cout << "Объект Трапеция успешно создан!\n";
				system("pause");
				system("cls");
			}
			else
			{
				cout << "Предел объектов достигнут!\n";
				system("pause");
				choiceTriangle = '0';
			}

			while (choiceTriangle != '0')
			{
				system("cls");
				cout << "===Треугольник===\nВыберите действие:\n" << "1) Проинициализировать объект с клавиатуры\n" << "2) Записать данные объекта в файл\n" << "3) Считать данные из файла в объект\n"
					<< "4) Посчитать периметр объекта\n" << "5) Посчитать площадь объекта\n" << "0) Выход\n";
				choiceTriangle = _getch();
				switch (choiceTriangle)
				{
				case '1':
				{
					system("cls");
					if (initialized != true)
						CUROBJSET;
					else cout << "Объект уже проинициализирован!\n";
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
						cout << "Запись в файл произведена!\n";
					}
					else
						cout << "Объект неинициализирован!\n";
					system("pause");
					break;
				}
				case '3':
				{
					system("cls");
					if (initialized != true)
					{
						CUROBJDIN;
						cout << "Данные из файла успешно считаны!\n";
						CUROBJDISP;
						initialized = true;
					}
					else cout << "Объект уже проинициализирован!\n";
					system("pause");
					break;
				}
				case '4':
				{
					system("cls");
					if (initialized == true)
						CUROBJPER;
					else cout << "Объект не проинициализирован!\n";
					system("pause");
					break;
				}
				case '5':
				{
					system("cls");
					if (initialized == true)
						CUROBJSQ;
					else cout << "Объект не проинициализирован!\n";
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
					cout << "Неверный ввод!\n";
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
			cout << "Неверный ввод!\n";
			system("pause");
			break;
		}
		}
	}
	system("cls");
	cout << "До свидания!\n";
	return 0;
}