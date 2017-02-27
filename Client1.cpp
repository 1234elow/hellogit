#include <iostream>

#include <vector>

#include "Student.h"

#include <string>

using namespace std;

int linearSearch(auto data, auto key)//prototype
{
	for(int i = 0; i < data.size();i++)
	{
		if (data[i].getName() == key)
		{
			return i;
		}
	}
	return -1;
} 

int main()

{
	student obj1;
       vector<student> students(4);

       string name;
       string sKey;
       int age;
       int result;

       for (int i = 0; i < 4; i++)

       {

              cout << "Enter a student's name" << endl;
//	      students.push_back(student);

              cin >> name;
             
              obj1.setName(name);
	      students.push_back(obj1);
              students[i].setName(name);

              cout << "Enter a student's age" << endl;

              cin >> age;
	      obj1.setAge(age);	
	      students.push_back(obj1);
              students[i].setAge(age);

       }

       cout << "Class list for English" << endl;

       for (int i = 0; i < 4; i++)

       {

              name = students[i].getName();

              age = students[i].getAge();

              cout << name << " " << age << endl;

       }
cout << "Enter a value to search: ";
cin >> sKey;
       
while (sKey != "#")
{

result = linearSearch (students,sKey);

cout << "  '" << sKey << "' was ";

if (result == -1)
cout << "not found";
else
cout << "found at index " << result;

cout << endl << endl << "Enter a value to search again: ";
cin >> sKey;
}
}


