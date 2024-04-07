#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	const int size = 5;

	Person* persons = new Person[size]
	{
		{string("Петя"), string("Петров"), 20, "743074, Смоленская область, город Балашиха, пл. Ладыгина, 21"},
		{string("Федя"), string("Васильев"), 54, "312670, Брянская область, город Раменское, въезд Косиора, 78"},
		{string("Лидия"), string("Кузнецова"), 15, "957998, Орловская область, город Волоколамск, пр. 1905 года, 9"},
		{string("Елена"), string("Нестеренко"), 28, "697478, Новгородская область, город Волоколамск, пр. Чехова, 34"},
		{string("Даниил"), string("Костиков"), 34, "568447, Тюменская область, город Шатура, шоссе Балканская, 52"}
	};


	for (Person* i = persons; i < persons + size; i++)
	{
		cout << i->toString();
	}

	delete[]persons;
};