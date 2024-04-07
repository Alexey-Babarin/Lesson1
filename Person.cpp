#include "Person.h"

Person::Person()
{
	_name = "Ivan";
	_lastName = "Ivanov";
	_age = 40;
}

Person::Person(const string name, const string lastName, unsigned int age, const char* adress)
{
	_name = name;
	_lastName = lastName;
	_age = age;
	createAdress(adress);
}

Person::~Person()
{
	delete[] _adress;

	cout << "Деструктор был вызван";
}


string Person::toString()
{
	return "Имя: " + _name + "\tФамилия: " + _lastName + "\tВозраст:" + to_string(_age) + "\nАдрес" + _adress + "\n\n";
}

void Person::setAdress (const char* adress)
{
	delete[] _adress;
	createAdress(adress);
}

char* Person::getAdress()
{
	return _adress;
}

void Person::createAdress(const char* adress)
{
	int length = strlen(adress);
	_adress = new char[length + 1];
	for (size_t i = 0; i <= length; i++)
	{
		_adress[i] = adress[i];
	}
}
void Person::setName(string newName)
{
	regex self_regex("(([A-Za-z])+)", regex_constants::ECMAScript | std::regex_constants::icase);
	if (std::regex_search(newName, self_regex))
		_name = newName;
	else
		_name.std::string::empty();
}

string Person::getName()
{
	return _name;
}

void Person::setLastName(string newLastName)
{
	regex self_regex("(\\w+)", regex_constants::ECMAScript | std::regex_constants::icase);
	if (std::regex_search(newLastName, self_regex))
		_lastName = newLastName;
	else
		_lastName.std::string::empty();
}

string Person::getLastName()
{
	return _lastName;
}

void Person::setAge(unsigned int newAge)
{
	if (newAge > 100)
		_age = 100;
	else if (_age < 1)
		_age = 1;
	else
		_age = 1;
}

unsigned int Person::getAge()
{
	return _age;
}

