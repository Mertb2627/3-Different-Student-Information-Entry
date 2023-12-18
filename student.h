#include <string>
using namespace std;


#pragma once
class student
{
public:
	student(string name, string surname, int age);

	string getName();
	void setName(string name);

	string getSurname();
	void setSurname(string surname);

	int getAge();
	void setAge(int age);

	void printInfo();



private:
		string name;
		string surname;
		int age;	
};

//bu kod Mert Bülbül (220502006) tarafýndan yazýlmýþtýr