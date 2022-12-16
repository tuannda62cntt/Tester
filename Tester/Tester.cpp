#include <iostream>
#include <string>
#include <cstring>
#include <ctime>
#include <vector>

#include "Classroom.h"
using namespace std;

int main()
{
    Classroom class1("Math");
    Student stu1("Adam", 4.0);
    Student stu2("Eliz", 3.8);
    Student stu3("Bob", 2.6);

    class1.addNewStudent(stu1);
    class1.addNewStudent(stu2);
    class1.addNewStudent(stu3);
    class1.displayStudentsInClass();
}
