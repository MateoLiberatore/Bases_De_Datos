#pragma once

#include "./student.h"
#include "./course.h"
#include <iostream>
using namespace std;

class attendanceManagement{
    public:
        attendanceManagement();
        ~attendanceManagement();

        void takeAttendance(student* student, course* course, string datetime, bool state);
        void showAttendance();
};