/* C++Basics.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
   #include<name> - добавление библиотеки
	iostream - ввод, вывод
	cmath - математика
 // - комментарий */

 // имена переменных задаются идентификаторами буквы, цифры, подчеркивания; 
 // начинаются не с цифры
 // Большая и маленькая буква - разные(MAX != max)
 // Константа объявляется const type name = value;
 // Переменная - это именнованная область памяти, которая содержит значение.
 // type name(name, name...)

 //types:
 //int(2-4 bytes)
 //2 bytes: -2^15...2^15-1
 //4 bytes: -2^31...2^31-1
 //long long(8 bytes): -2^63...2^63-1
 //unsigned int 0...2^32-1
 //unsigned long long 0...2^64-1
 //float(8 bytes)
 //double(8 bytes): 1.7*10^-308...1,7*10^308

#include <iostream>
using namespace std;
static void datatypes()
{
	{
		int a, b;
		cin >> a;
		b = a / 10;
		if (a % 10 == 0)
		{
			cout << b;
		}
		else
		{
			cout << b + 1;
		}

		/*int a, b, c, d;
		cin >> a;
		b = a / 1000;
		c = b / 100 + b / 10 % 10 + b % 10;
		d = a % 10 + a % 100 / 10 + a % 1000 / 100;
		if (c == d)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}*/
	}
}
