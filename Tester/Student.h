
#ifndef Student_Header
#define Student_Header
#include <vector>
#include <iostream>
using namespace std;
class Student
{
private:
	string name;
	double grade;
public:
	/*Static Variable*/
	static int year;
	static vector<Student> studentCollection;
	/*Constructors*/
	Student();
	Student(string name, double grade);
	/*Getters and Setters*/
	string getName();
	double getGrade();
	void setName(string name);
	void setGrade(double grade);
	void displayInfo();
};
#endif // !Student_Header


