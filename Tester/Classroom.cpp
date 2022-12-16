#include "Classroom.h"

Classroom::Classroom(string name)
{
	this->name = name;
}
string Classroom::getName()
{
	return name;
}
vector<Student> Classroom::getStudentInClass()
{
	return studentInClass;
}
void Classroom::setName(string name)
{
	this->name = name;
}

void Classroom::addNewStudent(Student student)
{
	studentInClass.push_back(student);
}
void Classroom::displayStudentsInClass()
{
	for (Student student : studentInClass)
	{
		student.displayInfo();
	}
}
