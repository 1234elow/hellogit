#include <iostream>

#include <vector>

#include "Student.h"

#include <string>

using namespace std;

int linearSearch(auto data, auto key)//prototype
{
	for(int i = 0; i < data.size();i++)
	{
		if (data[i] == key)
		{
			return i;
		}
	}
	return -1;
} 

int main()

{

       vector<student> students(4);

       string name;

       int age;

       for (int i = 0; i < 4; i++)

       {

              cout << "Enter a student's name" << endl;

              cin >> name;

              students[i].setName(name);

              cout << "Enter a student's age" << endl;

              cin >> age;

              students[i].setAge(age);

       }

       cout << "Class list for English" << endl;

       for (int i = 0; i < 4; i++)

       {

              name = students[i].getName();

              age = students[i].getAge();

              cout << name << " " << age << endl;

       }

       cin >> name;

}

 
