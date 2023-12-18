#include "student.h"

#include <iostream>
	



student:: student(string name, string surname, int age)

{
		setName(name);
		setSurname(surname);
		setAge(age);

		std::cout << "Student Created\n";
		printInfo();
}

string student::getName()
{
		return name;
}

void student::setName(string name)
{
	if (name.length() > 1 && name.length() <= 20)
	{
		this->name = name;
	}
	else
	{
		this->name = "*******";
	}
}
string student::getSurname()
{
	return surname;
}

void student::setSurname(string surname)
{
	if (surname.length() > 1 && surname.length() <= 20)
	{
		this->surname = surname;
	}
	else
	{
		this->surname = "*******";
	}
}

int student::getAge()
{
	return age;
}

void student::setAge(int age)
{
	if (age < 6)
		this->age = 6;
	else if (age > 25)
		this->age = 25;
	else
		this->age = age;
}

void student::printInfo()
{
	std::cout << "####  Bilgi #### \n";
	std::cout << "name:" << name << std::endl;
	std::cout << "surname:" << surname << std::endl;
	std::cout << "Age:" << getAge() << std::endl;
}



//bu kod Mert Bülbül (220502006) tarafından yazılmıştır