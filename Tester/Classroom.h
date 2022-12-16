
#ifndef Classroom_Header
#define Classroom_Header
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "Student.h"
using namespace std;
class Classroom
{
private:
	string name;
	vector<Student> studentInClass;
public:
	Classroom(string name);
	string getName();
	vector<Student> getStudentInClass();
	void setName(string name);
	void addNewStudent(Student student);
	void displayStudentsInClass();
};
#endif // !Classroom_Header


