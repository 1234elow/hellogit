#include <iostream>

#include <string>

using namespace std;

 

class student

{

       int age = 0;

       string name = "";

public:

       void setName(string);

       void setAge(int);

       string getName();

       int getAge();

};

void student::setName(string a)

{

       name = a;

 

}

void student::setAge(int a)

{

       age = a;

 

}

string student::getName()

{

       return name;

 

}

int student::getAge()

{

       return age;

 

}
