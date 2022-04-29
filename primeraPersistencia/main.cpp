#include <iostream>
#include "./includes/attendanceManagement.h"
#include "./includes/student.h"
#include "./includes/course.h"


using namespace std;

int main()
{
    student* student = new student();
    student->setIdentifier(1);
    student->setName("Juan");
    student->setSurname("Perez");

    course* course = new course();
    course->setIdentifier(1);
    course->setName("Algebra");

    attendanceManagement* attendanceManagement = new attendanceManagement();
    attendanceManagement->takeAttendance(student, course, "2021-06-08", true);

    attendanceManagement->showAttendance();

    delete student;
    delete course;
    delete attendanceManagement;

    return 0;
}