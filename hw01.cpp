#include <iostream>
#include "student.h"

using namespace std;

int main()
{
    string name;
    string surname;
    int age;

    for (auto i{ 0 }; i < 3; ++i)
    {
        cout << "Name: ";
        cin >> name;

        cout << "Surname: ";
        cin >> surname;

        cout << "Age: ";
        cin >> age;

        student e(name, surname, age);
    }

    return 0;
}



//bu kod Mert Bülbül (220502006) tarafından yazılmıştır