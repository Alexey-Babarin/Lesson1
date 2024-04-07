#pragma once
#include <iostream>
#include <string>
#include <regex>

using namespace std;
class Person
{
private:
	string _name;
	string _lastName;
	unsigned int _age = 0;
	char* _adress;

	

public:
	string toString();

	void setAdress(const char* adress);
	char* getAdress();
	void createAdress(const char* adress);

	void setName(string newName);
	string getName();
	void setLastName(string newLastName);
	string getLastName();
	void setAge(unsigned int newAge);
	unsigned int getAge();

	Person();
	Person(const string name, const string lastName, unsigned int age, const char* adress);
	

	~Person();
	
};
