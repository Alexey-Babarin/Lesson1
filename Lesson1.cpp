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
		{string("����"), string("������"), 20, "743074, ���������� �������, ����� ��������, ��. ��������, 21"},
		{string("����"), string("��������"), 54, "312670, �������� �������, ����� ���������, ����� �������, 78"},
		{string("�����"), string("���������"), 15, "957998, ��������� �������, ����� �����������, ��. 1905 ����, 9"},
		{string("�����"), string("����������"), 28, "697478, ������������ �������, ����� �����������, ��. ������, 34"},
		{string("������"), string("��������"), 34, "568447, ��������� �������, ����� ������, ����� ����������, 52"}
	};


	for (Person* i = persons; i < persons + size; i++)
	{
		cout << i->toString();
	}

	delete[]persons;
};