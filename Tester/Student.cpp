#include "Student.h"

int Student::year = 0;
vector<Student> Student::studentCollection = {};

Student::Student()
{
	name = " ";
	grade = 0;
}
Student::Student(string name, double grade)
{
	this->name = name;
	this->grade = grade;
}
string Student::getName()
{
	return name;
}
double Student::getGrade()
{
	return grade;
}
void Student::setName(string name)
{
	this->name = name;
}
void Student::setGrade(double grade)
{
	this->grade = grade;
}
void Student::displayInfo()
{
	cout << getName() << ", " << getGrade() << endl;
}
